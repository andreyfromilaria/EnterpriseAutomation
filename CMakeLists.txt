project(EnterpriseAutomation)

cmake_minimum_required(VERSION 2.8)

SET(CMAKE_CXX_FLAGS "-std=c++0x")

set(EA_SOURCES 
	Src/BasicExcel.cxx
	Src/ExcelFormat.cxx
	Src/CSubject.cxx
	Src/CEnterprise.cxx
	Src/Ratios.cxx
	Src/CRatioManager.cxx
	Src/Models.cxx
	Src/CModelManager.cxx
)

set(EA_HEADERS
	Include/Ilaria.hxx
	Include/BasicExcel.hxx
	Include/ExcelFormat.hxx
	Include/CEnterprise.hxx
	Include/CObserver.hxx
	Include/CSubject.hxx
	Include/IlariaTypes.hxx
	Include/Ratios.hxx
	Include/CRatioManager.hxx
	Include/Models.hxx
	Include/CModelManager.hxx
)

set(EA_INCLUDE_DIRS 
	Include
)

set(EA_LIBRARIES EA)

include_directories(${EA_INCLUDE_DIRS})

add_library(EA ${EA_SOURCES} ${EA_HEADERS})

add_subdirectory(Main)