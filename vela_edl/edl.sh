LD_LIBRARY_PATH=$EPICS_EXTENSIONS/lib/$HOST_ARCH:$EPICS_BASE/lib/$HOST_ARCH
export LD_LIBRARY_PATH
/home/controls/edl/edl_load.sh $1 $2
