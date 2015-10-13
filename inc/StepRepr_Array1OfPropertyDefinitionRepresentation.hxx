// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_Array1OfPropertyDefinitionRepresentation_HeaderFile
#define _StepRepr_Array1OfPropertyDefinitionRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepRepr_PropertyDefinitionRepresentation.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepRepr_PropertyDefinitionRepresentation;



class StepRepr_Array1OfPropertyDefinitionRepresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepRepr_Array1OfPropertyDefinitionRepresentation(const Standard_Integer Low, const Standard_Integer Up);
  
    StepRepr_Array1OfPropertyDefinitionRepresentation(const Handle(StepRepr_PropertyDefinitionRepresentation)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepRepr_PropertyDefinitionRepresentation)& V) ;
  
      void Destroy() ;
~StepRepr_Array1OfPropertyDefinitionRepresentation()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepRepr_Array1OfPropertyDefinitionRepresentation& Assign (const StepRepr_Array1OfPropertyDefinitionRepresentation& Other) ;
 const  StepRepr_Array1OfPropertyDefinitionRepresentation& operator = (const StepRepr_Array1OfPropertyDefinitionRepresentation& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepRepr_PropertyDefinitionRepresentation)& Value) ;
  
     const  Handle(StepRepr_PropertyDefinitionRepresentation)& Value (const Standard_Integer Index)  const;
   const  Handle(StepRepr_PropertyDefinitionRepresentation)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepRepr_PropertyDefinitionRepresentation)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepRepr_PropertyDefinitionRepresentation)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepRepr_Array1OfPropertyDefinitionRepresentation(const StepRepr_Array1OfPropertyDefinitionRepresentation& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepRepr_PropertyDefinitionRepresentation)
#define Array1Item_hxx <StepRepr_PropertyDefinitionRepresentation.hxx>
#define TCollection_Array1 StepRepr_Array1OfPropertyDefinitionRepresentation
#define TCollection_Array1_hxx <StepRepr_Array1OfPropertyDefinitionRepresentation.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepRepr_Array1OfPropertyDefinitionRepresentation_HeaderFile
