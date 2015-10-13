// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_SpecifiedHigherUsageOccurrence_HeaderFile
#define _StepRepr_SpecifiedHigherUsageOccurrence_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepRepr_SpecifiedHigherUsageOccurrence.hxx>

#include <Handle_StepRepr_AssemblyComponentUsage.hxx>
#include <Handle_StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
class StepRepr_AssemblyComponentUsage;
class StepRepr_NextAssemblyUsageOccurrence;
class TCollection_HAsciiString;
class StepBasic_ProductDefinition;


//! Representation of STEP entity SpecifiedHigherUsageOccurrence
class StepRepr_SpecifiedHigherUsageOccurrence : public StepRepr_AssemblyComponentUsage
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepRepr_SpecifiedHigherUsageOccurrence();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Id, const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Name, const Standard_Boolean hasProductDefinitionRelationship_Description, const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Description, const Handle(StepBasic_ProductDefinition)& aProductDefinitionRelationship_RelatingProductDefinition, const Handle(StepBasic_ProductDefinition)& aProductDefinitionRelationship_RelatedProductDefinition, const Standard_Boolean hasAssemblyComponentUsage_ReferenceDesignator, const Handle(TCollection_HAsciiString)& aAssemblyComponentUsage_ReferenceDesignator, const Handle(StepRepr_AssemblyComponentUsage)& aUpperUsage, const Handle(StepRepr_NextAssemblyUsageOccurrence)& aNextUsage) ;
  
  //! Returns field UpperUsage
  Standard_EXPORT   Handle(StepRepr_AssemblyComponentUsage) UpperUsage()  const;
  
  //! Set field UpperUsage
  Standard_EXPORT   void SetUpperUsage (const Handle(StepRepr_AssemblyComponentUsage)& UpperUsage) ;
  
  //! Returns field NextUsage
  Standard_EXPORT   Handle(StepRepr_NextAssemblyUsageOccurrence) NextUsage()  const;
  
  //! Set field NextUsage
  Standard_EXPORT   void SetNextUsage (const Handle(StepRepr_NextAssemblyUsageOccurrence)& NextUsage) ;




  DEFINE_STANDARD_RTTI(StepRepr_SpecifiedHigherUsageOccurrence)

protected:




private: 


  Handle(StepRepr_AssemblyComponentUsage) theUpperUsage;
  Handle(StepRepr_NextAssemblyUsageOccurrence) theNextUsage;


};







#endif // _StepRepr_SpecifiedHigherUsageOccurrence_HeaderFile
