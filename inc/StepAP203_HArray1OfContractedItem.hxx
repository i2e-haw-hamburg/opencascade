// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_HArray1OfContractedItem_HeaderFile
#define _StepAP203_HArray1OfContractedItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP203_HArray1OfContractedItem.hxx>

#include <StepAP203_Array1OfContractedItem.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP203_ContractedItem;
class StepAP203_Array1OfContractedItem;



class StepAP203_HArray1OfContractedItem : public MMgt_TShared
{

public:

  
    StepAP203_HArray1OfContractedItem(const Standard_Integer Low, const Standard_Integer Up);
  
    StepAP203_HArray1OfContractedItem(const Standard_Integer Low, const Standard_Integer Up, const StepAP203_ContractedItem& V);
  
      void Init (const StepAP203_ContractedItem& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepAP203_ContractedItem& Value) ;
  
     const  StepAP203_ContractedItem& Value (const Standard_Integer Index)  const;
  
      StepAP203_ContractedItem& ChangeValue (const Standard_Integer Index) ;
  
     const  StepAP203_Array1OfContractedItem& Array1()  const;
  
      StepAP203_Array1OfContractedItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepAP203_HArray1OfContractedItem)

protected:




private: 


  StepAP203_Array1OfContractedItem myArray;


};

#define ItemHArray1 StepAP203_ContractedItem
#define ItemHArray1_hxx <StepAP203_ContractedItem.hxx>
#define TheArray1 StepAP203_Array1OfContractedItem
#define TheArray1_hxx <StepAP203_Array1OfContractedItem.hxx>
#define TCollection_HArray1 StepAP203_HArray1OfContractedItem
#define TCollection_HArray1_hxx <StepAP203_HArray1OfContractedItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepAP203_HArray1OfContractedItem
#define TCollection_HArray1_Type_() StepAP203_HArray1OfContractedItem_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepAP203_HArray1OfContractedItem_HeaderFile
