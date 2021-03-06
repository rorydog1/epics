/*  QENumericEdit.h
 *
 *  This file is part of the EPICS QT Framework, initially developed at the Australian Synchrotron.
 *
 *  The EPICS QT Framework is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  The EPICS QT Framework is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with the EPICS QT Framework.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Copyright (c) 2013 Australian Synchrotron
 *
 *  Author:
 *    Andrew Starritt
 *  Contact details:
 *    andrew.starritt@synchrotron.org.au
 */

#ifndef QENUMERICEDIT_H
#define QENUMERICEDIT_H

#include <QValidator>
#include <QKeyEvent>
#include <QEPluginLibrary_global.h>
#include <QEWidget.h>
#include <QCaVariableNamePropertyManager.h>
#include <QEFloatingFormatting.h>
#include <QEFixedPointRadix.h>
#include <QEGenericEdit.h>

/*!
 * \brief The QENumericEdit class
 * This class is similar to  QELineEdit (both of which are derived from QLineEdit).
 * However this class is tailored specifcially for editing numerical values.
 *
 * Note: this class based on thumb_wheel_edits.pas by same author.
 */


class QEPLUGINLIBRARYSHARED_EXPORT QENumericEdit : public QEGenericEdit {

Q_OBJECT
public:
    // QENumericEdit specifc properties ===============================================

    /// If true (default), display and editing of numbers using the precision, and control limits supplied with the data.
    /// If false, the precision, leadingZeros, minimum and maximum properties are used.
    Q_PROPERTY(bool autoScale READ getAutoScale WRITE setAutoScale)

    /// Specify radix, default is Decimal.
    Q_PROPERTY (QEFixedPointRadix::Radicies radix        READ getRadix       WRITE setRadix)

    /// Specify digit 'thousands' separator character, default is none.
    Q_PROPERTY (QEFixedPointRadix::Separators separator  READ getSeparator   WRITE setSeparator)

    /// Precision used for the display and editing of numbers. The default is 4.
    /// This is only used if autoScale is false.
    /// Stictly speaking, this should be an unsigned int, but designer properties editor much 'nicer' with integers.
    Q_PROPERTY(int  precision READ getPropertyPrecision        WRITE setPropertyPrecision)

    /// Speficies the number of leading zeros.
    /// This is only used if autoScale is false.
    /// Stictly speaking, this should be an unsigned int, but designer properties editor much 'nicer' with integers.
    Q_PROPERTY (int leadingZeros  READ getPropertyLeadingZeros WRITE setPropertyLeadingZeros)

    /// Speficies the mimimum allowed value.
    /// This is only used if autoScale is false.
    Q_PROPERTY (double minimum    READ getPropertyMinimum      WRITE setPropertyMinimum)

    /// Speficies the maximum allowed value.
    /// This is only used if autoScale is false.
    Q_PROPERTY (double maximum    READ getPropertyMaximum      WRITE setPropertyMaximum)

    /// If true (default), add engineering units supplied with the data.
    ///
    Q_PROPERTY(bool addUnits READ getAddUnits WRITE setAddUnits)

   /// Array Index element to edit if variable is a waveform. Defaults to 0.
   ///
   Q_PROPERTY (int arrayIndex   READ getArrayIndex   WRITE setArrayIndex )

    // End QENumericEdit specifc properties ============================================

public:
    /// Create without a variable.
    /// Use setVariableNameProperty() and setSubstitutionsProperty() to define a variable and,
    /// optionally, macro substitutions later.
    QENumericEdit (QWidget *parent = 0);

    /// Create with a variable.
    /// A connection is automatically established.
    /// If macro substitutions are required, create without a variable and set the variable and
    /// macro substitutions after creation.
    QENumericEdit (const QString &variableName, QWidget *parent = 0);

    /// Destruction
    virtual ~QENumericEdit ();

public:
    double getNumericValue ();
    void setNumericValue (const double value, const bool isUserUpdate = false);  // as opposed to system update

    // Property set and get functions.
    void setAutoScale (const bool value);
    bool getAutoScale () const;

    void setPropertyPrecision (const int value);
    int getPropertyPrecision () const;

    void setPropertyLeadingZeros (const int value);
    int getPropertyLeadingZeros () const;

    void setPropertyMinimum (const double value);
    double getPropertyMinimum () const;

    void setPropertyMaximum (const double value);
    double getPropertyMaximum () const;

    void setAddUnits (bool addUnits);
    bool getAddUnits () const;

    void setArrayIndex (const int arrayIndexIn);
    int getArrayIndex () const;

    void setRadix (const QEFixedPointRadix::Radicies value);
    QEFixedPointRadix::Radicies getRadix () const;

    void setSeparator (const QEFixedPointRadix::Separators value);
    QEFixedPointRadix::Separators getSeparator () const;

protected:
   // override
   void keyPressEvent (QKeyEvent *event);
   void focusInEvent (QFocusEvent *event);
   void mouseReleaseEvent (QMouseEvent *event);

   QEFloatingFormatting floatingFormatting;

   void establishConnection (unsigned int variableIndex);
   qcaobject::QCaObject* createQcaItem (unsigned int variableIndex);

   // These functions get either the property value or the auto value.
   // For the latter, the PV must be connected and the autoScale proprty must be true.
   //
   int getPrecision () const;
   int getLeadingZeros () const;
   double getMinimum () const;
   double getMaximum () const;

   // Maximum number of allowed digits - e.g. for decimal this is 15.
   //
   int maximumSignificance () const;
   int getRadixValue () const;   // i.e. 10, 16, 8, 2 etc.

private:
   // Property values
   //
   double propertyMinimum;
   double propertyMaximum;
   int propertyPrecision;
   int propertyLeadingZeros;

   // Autoscale values based on PV meta data
   //
   double autoMinimum;
   double autoMaximum;
   int autoLeadingZeros;
   int autoPrecision;

   // Other values
   //
   bool mAutoScale;
   int mCursor;
   bool addUnits;                   // Flag use engineering units from database
   int arrayIndex;
   QEFixedPointRadix fpr;
   double mValue;

   // local copy of testAndClearIsFirstUpdate() call.
   //
   bool firstNumericUpdate;

   void commonConstructor ();

   QString imageOfValue () const;   // Generate image of the current value - excludes any EGU.
   int lengthOfImageValue ();       // Length of String generated by imageOfValue - excludes any EGU.
   double valueOfImage (const QString & image);  // Extract value of given image - excludes any EGU.
   bool showSign () const;
   bool cursorOverSign ();

   void setNumericText ();          // Calls parent class setText using string from imageOfValue.
   void setDigitSelection ();       // high-lights selected digit

   void setCursor (const int value);
   int getCursor ();

   bool isRadixDigit (QChar qc);    // Is the character a valid digit for the selected radix
   bool isSign (QChar qc);          // Is the character on of '+' or '-'
   bool isSignOrDigit (QChar qc);   // Is the character either of the above.


   double calcUpper ();
   double calcLower ();

   // The radix, leadingZeros, precision, minimum and maximum are NOT independent
   // quantities. This function ensures given set of values are consistent and
   // hopefully sensible. The Priority type allows the caller to prioritise or
   // fix one of the input values.
   //
   enum Priority { zeros, prec, min,  max };
   void rationalise (const enum Priority priority,
                     int & leadingZeros,
                     int & precision,
                     double & minimum,
                     double & maximum);

private slots:
   void setDoubleValue (const double& value, QCaAlarmInfo&, QCaDateTime&, const unsigned int&);

signals:
   // Note, the following signals are common to many QE widgets,
   // if changing the doxygen comments, ensure relevent changes are migrated to all instances
   // These signals are emitted using the QEEmitter::emitDbValueChanged function.
   // This signal emiited as a result of changes to the primary PV variable only,
   // i.e. excludes the edgeVariable.
   /// Sent when the widget is updated following a data change
   /// Can be used to pass on EPICS data (as presented in this widget) to other widgets.
   /// For example a QList widget could log updates from this widget.
   void dbValueChanged (const QString& out);   // signal as formatted text
   void dbValueChanged (const int& out);       // signal as int if applicable
   void dbValueChanged (const long& out);      // signal as long if applicable
   void dbValueChanged (const qlonglong& out); // signal as qlonglong if applicable
   void dbValueChanged (const double& out);    // signal as floating if applicable
   void dbValueChanged (const bool& out);      // signal as bool: value != 0 if applicable

   // This signal is emitted using the QEEmitter::emitDbConnectionChanged function.
   /// Sent when the widget state updated following a channel connection change
   /// Applied to provary varible.
   void dbConnectionChanged (const bool& isConnected);

protected:
   // Override QEGeneric edit abstract functions
   //
   /// Sets the undelying QLineEdit widget to the given value.
   void setValue (const QVariant & value);

   /// Gets the undelying value.
   QVariant getValue ();

   /// Write the data to the channel.
   bool writeData (const QVariant& value, QString& message);

   friend class NumericValidator;
};

#endif  // QENUMERICEDIT_H
