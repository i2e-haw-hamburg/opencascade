// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakePolyline_HeaderFile
#define _StepToGeom_MakePolyline_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepToGeom_Root.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepGeom_Polyline.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
class StepGeom_Polyline;
class Geom_BSplineCurve;


//! Translates polyline entity into Geom_BSpline
//! In case if polyline has more than 2 points bspline will be C0
class StepToGeom_MakePolyline  : public StepToGeom_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean Convert (const Handle(StepGeom_Polyline)& SPL, Handle(Geom_BSplineCurve)& CC) ;




protected:





private:





};







#endif // _StepToGeom_MakePolyline_HeaderFile
