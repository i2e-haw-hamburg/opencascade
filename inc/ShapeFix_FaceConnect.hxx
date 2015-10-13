// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_FaceConnect_HeaderFile
#define _ShapeFix_FaceConnect_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
class TopoDS_Face;
class TopoDS_Shell;


//! Rebuilds connectivity between faces in shell
class ShapeFix_FaceConnect 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ShapeFix_FaceConnect();
  
  Standard_EXPORT   Standard_Boolean Add (const TopoDS_Face& aFirst, const TopoDS_Face& aSecond) ;
  
  Standard_EXPORT   TopoDS_Shell Build (const TopoDS_Shell& shell, const Standard_Real sewtoler, const Standard_Real fixtoler) ;
  
  //! Clears internal data structure
  Standard_EXPORT   void Clear() ;




protected:





private:



  TopTools_DataMapOfShapeListOfShape myConnected;
  TopTools_DataMapOfShapeListOfShape myOriFreeEdges;
  TopTools_DataMapOfShapeListOfShape myResFreeEdges;
  TopTools_DataMapOfShapeListOfShape myResSharEdges;


};







#endif // _ShapeFix_FaceConnect_HeaderFile
