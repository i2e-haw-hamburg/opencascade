// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaAreaDensity_HeaderFile
#define _StepFEA_FeaAreaDensity_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_FeaAreaDensity.hxx>

#include <Standard_Real.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class TCollection_HAsciiString;


//! Representation of STEP entity FeaAreaDensity
class StepFEA_FeaAreaDensity : public StepFEA_FeaMaterialPropertyRepresentationItem
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_FeaAreaDensity();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentationItem_Name, const Standard_Real aFeaConstant) ;
  
  //! Returns field FeaConstant
  Standard_EXPORT   Standard_Real FeaConstant()  const;
  
  //! Set field FeaConstant
  Standard_EXPORT   void SetFeaConstant (const Standard_Real FeaConstant) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaAreaDensity)

protected:




private: 


  Standard_Real theFeaConstant;


};







#endif // _StepFEA_FeaAreaDensity_HeaderFile
