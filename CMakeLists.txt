cmake_minimum_required(VERSION 3.9)
project(MarkovNeuronalModel)

set(CMAKE_CXX_STANDARD 11)

add_executable(MarkovNeuronalModel main.cpp Utils/DataStruct/EventClock.cpp Utils/DataStruct/EventClock.h
        Utils/DataStruct/PendingPeerQueue.cpp Utils/DataStruct/PendingPeerQueue.h
        Utils/DataStruct/Params.h DomainModel/MarkovState.cpp DomainModel/MarkovState.h DomainModel/Actions/Action.h DomainModel/Actions/ExternalKick.cpp DomainModel/Actions/ExternalKick.h DomainModel/Actions/PeerKick.cpp DomainModel/Actions/PeerKick.h DomainModel/Actions/Awake.cpp DomainModel/Actions/Awake.h ExecutionControl/EvolutionControl.cpp ExecutionControl/EvolutionControl.h StatsCollector/StatsCollectorManager.cpp StatsCollector/StatsCollectorManager.h StatsCollector/PopulationStatsCollector.cpp StatsCollector/PopulationStatsCollector.h StatsCollector/Observer.h ModelInitializer.cpp ModelInitializer.h BatchModelsInitializer.cpp BatchModelsInitializer.h Sampler.cpp Sampler.h Utils/DataStruct/Population.h Utils/DataStruct/Statistics.h StatsCollector/IndividualStatsCollector.cpp StatsCollector/IndividualStatsCollector.h)
# settings for profiling
# https://www.jetbrains.com/help/clion/cpu-profiler.html
#set(CMAKE_CXX_FLAGS "-fno-omit-frame-pointer -O0")
