export EPICS_BASE=/home/rorydog1/Desktop/epics/
export EPICS_HOST_ARCH=`${EPICS_BASE}/startup/EpicsHostArch`
export PATH=${PATH}:${EPICS_BASE}/bin/${EPICS_HOST_ARCH}
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${EPICS_BASE}/lib/${EPICS_HOST_ARCH}
