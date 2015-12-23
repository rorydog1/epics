#!../../bin/linux-x86_64/dg535

## You may have to change dg535 to something else
## everywhere it appears in this file

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/dg535.dbd"
dg535_registerRecordDeviceDriver pdbbase

## Load the StreamDevice path to the protocol files
epicsEnvSet ("STREAM_PROTOCOL_PATH","$(EPICS_BASE)/dg535/dg535_db_protocol")

## Configure devices
   drvAsynSerialPortConfigure("L0","/home/rory/COM8",0,0,0)
   asynSetOption("L0",-1,"baud","9600")
   asynSetOption("L0",-1,"bits","8")
   asynSetOption("L0",-1,"parity","even")
   asynSetOption("L0",-1,"stop","1")
   asynOctetSetOutputEos("L0",0,"\r")
   asynOctetSetInputEos("L0",0,"\r")

## Load record instances

dbLoadRecords("db/asynRecord.db","P=norum:,R=asyn,PORT=L0,ADDR=0,IMAX=100,OMAX=100")
dbLoadRecords("$(EPICS_BASE)/dg535/dg535_db_protocol/dg535.db","DEVICE=dg535,PORT=L0")

cd "${TOP}/iocBoot/${IOC}"
iocInit

## Start any sequence programs
#seq sncxxx,"user=roryHost"
