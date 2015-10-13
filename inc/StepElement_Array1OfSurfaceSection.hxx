// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_Array1OfSurfaceSection_HeaderFile
#define _StepElement_Array1OfSurfaceSection_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepElement_SurfaceSection.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepElement_SurfaceSection;



class StepElement_Array1OfSurfaceSection 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepElement_Array1OfSurfaceSection(const Standard_Integer Low, const Standard_Integer Up);
  
    StepElement_Array1OfSurfaceSection(const Handle(StepElement_SurfaceSection)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepElement_SurfaceSection)& V) ;
  
      void Destroy() ;
~StepElement_Array1OfSurfaceSection()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepElement_Array1OfSurfaceSection& Assign (const StepElement_Array1OfSurfaceSection& Other) ;
 const  StepElement_Array1OfSurfaceSection& operator = (const StepElement_Array1OfSurfaceSection& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepElement_SurfaceSection)& Value) ;
  
     const  Handle(StepElement_SurfaceSection)& Value (const Standard_Integer Index)  const;
   const  Handle(StepElement_SurfaceSection)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepElement_SurfaceSection)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepElement_SurfaceSection)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepElement_Array1OfSurfaceSection(const StepElement_Array1OfSurfaceSection& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepElement_SurfaceSection)
#define Array1Item_hxx <StepElement_SurfaceSection.hxx>
#define TCollection_Array1 StepElement_Array1OfSurfaceSection
#define TCollection_Array1_hxx <StepElement_Array1OfSurfaceSection.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepElement_Array1OfSurfaceSection_HeaderFile
