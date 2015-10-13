// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _NLPlate_HPG2Constraint_HeaderFile
#define _NLPlate_HPG2Constraint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_NLPlate_HPG2Constraint.hxx>

#include <Plate_D2.hxx>
#include <NLPlate_HPG1Constraint.hxx>
#include <Standard_Integer.hxx>
class gp_XY;
class Plate_D1;
class Plate_D2;


//! define a PinPoint (no G0)  G2 Constraint used to load a Non
//! Linear Plate
class NLPlate_HPG2Constraint : public NLPlate_HPG1Constraint
{

public:

  
  Standard_EXPORT NLPlate_HPG2Constraint(const gp_XY& UV, const Plate_D1& D1T, const Plate_D2& D2T);
  
  Standard_EXPORT virtual   Standard_Integer ActiveOrder()  const;
  
  Standard_EXPORT virtual  const  Plate_D2& G2Target()  const;




  DEFINE_STANDARD_RTTI(NLPlate_HPG2Constraint)

protected:




private: 


  Plate_D2 myG2Target;


};







#endif // _NLPlate_HPG2Constraint_HeaderFile