echo $EPICS_CA_ADDR_LIST

if ! ps | grep edm >/dev/null; then
  edm -server -display $DISPLAY -x -noedit -eolc &
  sleep 2
fi

if [ $# -ne 1 ]; then
  edm -display $DISPLAY -m $2 -open $1
else
  edm -display $DISPLAY -open $1
fi
