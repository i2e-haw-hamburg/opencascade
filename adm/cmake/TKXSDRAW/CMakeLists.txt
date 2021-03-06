project(TKXSDRAW)

if (WIN32)
  list( APPEND TKXSDRAW_PRECOMPILED_DEFS "-D__XSDRAW_DLL" )
  list( APPEND TKXSDRAW_PRECOMPILED_DEFS "-D__XSDRAWIGES_DLL" )
  list( APPEND TKXSDRAW_PRECOMPILED_DEFS "-D__XSDRAWSTEP_DLL" )
  list( APPEND TKXSDRAW_PRECOMPILED_DEFS "-D__XSDRAWSTLVRML_DLL" )
  string( REGEX REPLACE ";" " " TKXSDRAW_PRECOMPILED_DEFS "${TKXSDRAW_PRECOMPILED_DEFS}")
endif()

  list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${WOK_LIB_PATH}" )
  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}/inc")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/inc" )
  ENDIF()
  IF(EXISTS "${CMAKE_SOURCE_DIR}/inc")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/inc" )
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "")
    IF(EXISTS "${BUILD_PATCH_DIR}/drv/XSDRAW")
      list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/drv/XSDRAW" )
    ENDIF()
    IF(EXISTS "${BUILD_PATCH_DIR}/src/XSDRAW")
      list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/src/XSDRAW" )
    ENDIF()

    IF(EXISTS "${BUILD_PATCH_DIR}/drv/XSDRAWIGES")
      list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/drv/XSDRAWIGES" )
    ENDIF()
    IF(EXISTS "${BUILD_PATCH_DIR}/src/XSDRAWIGES")
      list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/src/XSDRAWIGES" )
    ENDIF()

    IF(EXISTS "${BUILD_PATCH_DIR}/drv/XSDRAWSTEP")
      list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/drv/XSDRAWSTEP" )
    ENDIF()
    IF(EXISTS "${BUILD_PATCH_DIR}/src/XSDRAWSTEP")
      list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/src/XSDRAWSTEP" )
    ENDIF()

    IF(EXISTS "${BUILD_PATCH_DIR}/drv/XSDRAWSTLVRML")
      list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/drv/XSDRAWSTLVRML" )
    ENDIF()
    IF(EXISTS "${BUILD_PATCH_DIR}/src/XSDRAWSTLVRML")
      list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/src/XSDRAWSTLVRML" )
    ENDIF()

  ENDIF()

  IF(EXISTS "${CMAKE_SOURCE_DIR}/drv/XSDRAW")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/drv/XSDRAW" )
  ENDIF()
  IF(EXISTS "${CMAKE_SOURCE_DIR}/src/XSDRAW")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/src/XSDRAW" )
  ENDIF()

  IF(EXISTS "${CMAKE_SOURCE_DIR}/drv/XSDRAWIGES")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/drv/XSDRAWIGES" )
  ENDIF()
  IF(EXISTS "${CMAKE_SOURCE_DIR}/src/XSDRAWIGES")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/src/XSDRAWIGES" )
  ENDIF()

  IF(EXISTS "${CMAKE_SOURCE_DIR}/drv/XSDRAWSTEP")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/drv/XSDRAWSTEP" )
  ENDIF()
  IF(EXISTS "${CMAKE_SOURCE_DIR}/src/XSDRAWSTEP")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/src/XSDRAWSTEP" )
  ENDIF()

  IF(EXISTS "${CMAKE_SOURCE_DIR}/drv/XSDRAWSTLVRML")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/drv/XSDRAWSTLVRML" )
  ENDIF()
  IF(EXISTS "${CMAKE_SOURCE_DIR}/src/XSDRAWSTLVRML")
    list( APPEND TKXSDRAW_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/src/XSDRAWSTLVRML" )
  ENDIF()

IF (WIN32)
  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "")
  ENDIF()

ELSE()
  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "")
  ENDIF()

ENDIF()

  list( APPEND TKXSDRAW_USED_LIBS TKBRep )
  list( APPEND TKXSDRAW_USED_LIBS TKV3d )
  list( APPEND TKXSDRAW_USED_LIBS TKMath )
  list( APPEND TKXSDRAW_USED_LIBS TKNIS )
  list( APPEND TKXSDRAW_USED_LIBS TKernel )
  list( APPEND TKXSDRAW_USED_LIBS TKService )
  list( APPEND TKXSDRAW_USED_LIBS TKXSBase )
  list( APPEND TKXSDRAW_USED_LIBS TKMeshVS )
  list( APPEND TKXSDRAW_USED_LIBS TKG3d )
  list( APPEND TKXSDRAW_USED_LIBS TKViewerTest )
  list( APPEND TKXSDRAW_USED_LIBS TKG2d )
  list( APPEND TKXSDRAW_USED_LIBS TKSTEPBase )
  list( APPEND TKXSDRAW_USED_LIBS TKTopAlgo )
  list( APPEND TKXSDRAW_USED_LIBS TKGeomBase )
  list( APPEND TKXSDRAW_USED_LIBS TKGeomAlgo )
  list( APPEND TKXSDRAW_USED_LIBS TKMesh )
  list( APPEND TKXSDRAW_USED_LIBS TKDraw )
  list( APPEND TKXSDRAW_USED_LIBS TKSTEP )
  list( APPEND TKXSDRAW_USED_LIBS TKIGES )
  list( APPEND TKXSDRAW_USED_LIBS TKSTL )
  list( APPEND TKXSDRAW_USED_LIBS TKVRML )

if (WIN32)
elseif(APPLE)
elseif(ANDROID)
else()
endif()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/XSDRAW/XSDRAW.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//src/XSDRAW/XSDRAW.cxx" )
    SOURCE_GROUP (XSDRAW FILES "${BUILD_PATCH_DIR}//src/XSDRAW/XSDRAW.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/XSDRAW/XSDRAW.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/XSDRAW/XSDRAW.cxx" )
      SOURCE_GROUP (XSDRAW FILES "${CMAKE_SOURCE_DIR}//src/XSDRAW/XSDRAW.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/XSDRAW/XSDRAW_Functions.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//src/XSDRAW/XSDRAW_Functions.cxx" )
    SOURCE_GROUP (XSDRAW FILES "${BUILD_PATCH_DIR}//src/XSDRAW/XSDRAW_Functions.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/XSDRAW/XSDRAW_Functions.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/XSDRAW/XSDRAW_Functions.cxx" )
      SOURCE_GROUP (XSDRAW FILES "${CMAKE_SOURCE_DIR}//src/XSDRAW/XSDRAW_Functions.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/XSDRAW/XSDRAW_Vars.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//src/XSDRAW/XSDRAW_Vars.cxx" )
    SOURCE_GROUP (XSDRAW FILES "${BUILD_PATCH_DIR}//src/XSDRAW/XSDRAW_Vars.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/XSDRAW/XSDRAW_Vars.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/XSDRAW/XSDRAW_Vars.cxx" )
      SOURCE_GROUP (XSDRAW FILES "${CMAKE_SOURCE_DIR}//src/XSDRAW/XSDRAW_Vars.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/XSDRAWIGES/XSDRAWIGES.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//src/XSDRAWIGES/XSDRAWIGES.cxx" )
    SOURCE_GROUP (XSDRAWIGES FILES "${BUILD_PATCH_DIR}//src/XSDRAWIGES/XSDRAWIGES.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/XSDRAWIGES/XSDRAWIGES.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/XSDRAWIGES/XSDRAWIGES.cxx" )
      SOURCE_GROUP (XSDRAWIGES FILES "${CMAKE_SOURCE_DIR}//src/XSDRAWIGES/XSDRAWIGES.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/XSDRAWSTEP/XSDRAWSTEP.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//src/XSDRAWSTEP/XSDRAWSTEP.cxx" )
    SOURCE_GROUP (XSDRAWSTEP FILES "${BUILD_PATCH_DIR}//src/XSDRAWSTEP/XSDRAWSTEP.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/XSDRAWSTEP/XSDRAWSTEP.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTEP/XSDRAWSTEP.cxx" )
      SOURCE_GROUP (XSDRAWSTEP FILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTEP/XSDRAWSTEP.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_CoordsMap_0.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_CoordsMap_0.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_CoordsMap_0.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_CoordsMap_0.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_CoordsMap_0.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_CoordsMap_0.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfCoordsMap_0.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfCoordsMap_0.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfCoordsMap_0.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfCoordsMap_0.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfCoordsMap_0.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfCoordsMap_0.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap_0.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap_0.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap_0.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap_0.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap_0.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapIteratorOfElemNodesMap_0.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfCoordsMap_0.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfCoordsMap_0.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfCoordsMap_0.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfCoordsMap_0.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfCoordsMap_0.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfCoordsMap_0.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_0.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_0.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_0.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_0.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_0.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_DataMapNodeOfElemNodesMap_0.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_ElemNodesMap_0.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_ElemNodesMap_0.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_ElemNodesMap_0.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_ElemNodesMap_0.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_ElemNodesMap_0.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//drv/XSDRAWSTLVRML/XSDRAWSTLVRML_ElemNodesMap_0.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource3D.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource3D.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource3D.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource3D.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource3D.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DataSource3D.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DrawableMesh.cxx")
    list( APPEND TKXSDRAW_USED_SRCFILES "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DrawableMesh.cxx" )
    SOURCE_GROUP (XSDRAWSTLVRML FILES "${BUILD_PATCH_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DrawableMesh.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DrawableMesh.cxx")
      list( APPEND TKXSDRAW_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DrawableMesh.cxx" )
      SOURCE_GROUP (XSDRAWSTLVRML FILES "${CMAKE_SOURCE_DIR}//src/XSDRAWSTLVRML/XSDRAWSTLVRML_DrawableMesh.cxx")
    ENDIF()
  ENDIF()


IF (WIN32)
ELSE()

  IF (APPLE)

  ENDIF()

ENDIF()

if ("${USED_TOOLKITS}" STREQUAL "" OR DEFINED TurnONtheTKXSDRAW)
 add_library( TKXSDRAW SHARED ${TKXSDRAW_USED_SRCFILES} )

 set_property(TARGET TKXSDRAW PROPERTY FOLDER Draw)

 install( TARGETS TKXSDRAW
                                 RUNTIME DESTINATION "${INSTALL_DIR}/${OS_WITH_BIT}/${COMPILER}/bin${BUILD_POSTFIX}"
                                 ARCHIVE DESTINATION "${INSTALL_DIR}/${OS_WITH_BIT}/${COMPILER}/lib${BUILD_POSTFIX}"
                                 LIBRARY DESTINATION "${INSTALL_DIR}/${OS_WITH_BIT}/${COMPILER}/lib${BUILD_POSTFIX}")

 if (MSVC)
  install( FILES  ${CMAKE_BINARY_DIR}/out/bind/Debug/TKXSDRAW.pdb CONFIGURATIONS Debug
                                  DESTINATION "${INSTALL_DIR}/${OS_WITH_BIT}/${COMPILER}/bin${BUILD_POSTFIX}")
 endif()


 set_target_properties( TKXSDRAW PROPERTIES COMPILE_FLAGS "${TKXSDRAW_PRECOMPILED_DEFS}" )
 include_directories( ${TKXSDRAW_COMPILER_DIRECTORIES} )
 target_link_libraries( TKXSDRAW ${TKXSDRAW_USED_LIBS} )
endif()
