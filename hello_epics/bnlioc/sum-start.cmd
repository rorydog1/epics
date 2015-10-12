epicsEnvSet("ARCH","linux-x86_64")
epicsEnvSet("IOC","bnlioc")
dbLoadRecords("sum.db","INST=calc")
iocInit
