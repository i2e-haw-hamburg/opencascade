// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_SpotLight_HeaderFile
#define _Vrml_SpotLight_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Quantity_Color.hxx>
#include <gp_Vec.hxx>
#include <Standard_OStream.hxx>
class Quantity_Color;
class gp_Vec;


//! specifies a spot light node of VRML nodes specifying
//! properties of lights.
//! This  node  defines  a  spotlight  light  source.
//! A  spotlight  is  placed  at  a  fixed  location  in  3D-space
//! and  illuminates in  a  cone  along  a  particular  direction.
//! The  intensity  of  the  illumination  drops  off  exponentially
//! as  a  ray  of  light  diverges  from  this  direction  toward
//! the  edges  of  cone.
//! The  rate  of  drop-off  and  agle  of  the  cone  are  controlled
//! by  the  dropOfRate  and  cutOffAngle
//! Color is  written  as  an  RGB  triple.
//! Light intensity must be in the range 0.0 to 1.0, inclusive.
class Vrml_SpotLight 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Vrml_SpotLight();
  
  Standard_EXPORT Vrml_SpotLight(const Standard_Boolean aOnOff, const Standard_Real aIntensity, const Quantity_Color& aColor, const gp_Vec& aLocation, const gp_Vec& aDirection, const Standard_Real aDropOffRate, const Standard_Real aCutOffAngle);
  
  Standard_EXPORT   void SetOnOff (const Standard_Boolean anOnOff) ;
  
  Standard_EXPORT   Standard_Boolean OnOff()  const;
  
  Standard_EXPORT   void SetIntensity (const Standard_Real aIntensity) ;
  
  Standard_EXPORT   Standard_Real Intensity()  const;
  
  Standard_EXPORT   void SetColor (const Quantity_Color& aColor) ;
  
  Standard_EXPORT   Quantity_Color Color()  const;
  
  Standard_EXPORT   void SetLocation (const gp_Vec& aLocation) ;
  
  Standard_EXPORT   gp_Vec Location()  const;
  
  Standard_EXPORT   void SetDirection (const gp_Vec& aDirection) ;
  
  Standard_EXPORT   gp_Vec Direction()  const;
  
  Standard_EXPORT   void SetDropOffRate (const Standard_Real aDropOffRate) ;
  
  Standard_EXPORT   Standard_Real DropOffRate()  const;
  
  Standard_EXPORT   void SetCutOffAngle (const Standard_Real aCutOffAngle) ;
  
  Standard_EXPORT   Standard_Real CutOffAngle()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




protected:





private:



  Standard_Boolean myOnOff;
  Standard_Real myIntensity;
  Quantity_Color myColor;
  gp_Vec myLocation;
  gp_Vec myDirection;
  Standard_Real myDropOffRate;
  Standard_Real myCutOffAngle;


};







#endif // _Vrml_SpotLight_HeaderFile
