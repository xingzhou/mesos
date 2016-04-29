#include "trial.hpp"

#include <mesos/master/contender.hpp>

mesos::modules::Module<mesos::master::contender::MasterContender> trial(
    "0.29.0",
    "0.29.0",
    "dongdong",
    "xingzhou@cn.ibm.com",
    "trial",
    NULL,
    NULL
)
