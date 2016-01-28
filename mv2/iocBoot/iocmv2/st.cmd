#!../../bin/linux-x86_64/mv2

## You may have to change mv2 to something else
## everywhere it appears in this file

< envPaths
cd ${TOP}

## Register all support components
dbLoadDatabase "dbd/mv2.dbd"
mv2_registerRecordDeviceDriver pdbbase

##Connect
#drvAsynIPPortConfigure ("mv2_port1",  "148.79.130.58:10014", 0, 0, 0)
#dbLoadRecords("db/asynRgaRec.template","device=mv2,PORT=148.79.130.58:10014")

## Load record instances
#dbLoadTemplate "db/userHost.substitutions"
#dbLoadRecords "db/dbSubExample.db", "user=roryHost"

## Set this to see messages from mySub
#var mySubDebug 1

## Run this to trace the stages of iocInit
#traceIocInit

cd "${TOP}/iocBoot/${IOC}"
iocInit

## Start any sequence programs
#seq sncExample, "user=roryHost"

drvAsynIPPortConfigure("L0","148.79.130.58:10014",0,0,0)
mv2init("T1","L0")
dbLoadRecords("../../db/rgamv2.template","device=chas,PORT=L0")
