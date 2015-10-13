// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeConic_HeaderFile
#define _GeomToStep_MakeConic_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepGeom_Conic.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom_Conic.hxx>
#include <Handle_Geom2d_Conic.hxx>
class StepGeom_Conic;
class StdFail_NotDone;
class Geom_Conic;
class Geom2d_Conic;


//! This class implements the mapping between classes
//! Conic from Geom and the class Conic from StepGeom
//! which describes a Conic from prostep. As Conic is an abstract
//! Conic this class is an access to the sub-class required.
class GeomToStep_MakeConic  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeConic(const Handle(Geom_Conic)& C);
  
  Standard_EXPORT GeomToStep_MakeConic(const Handle(Geom2d_Conic)& C);
  
  Standard_EXPORT  const  Handle(StepGeom_Conic)& Value()  const;




protected:





private:



  Handle(StepGeom_Conic) theConic;


};







#endif // _GeomToStep_MakeConic_HeaderFile
