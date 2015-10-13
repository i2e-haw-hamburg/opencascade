// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _NLPlate_StackOfPlate_HeaderFile
#define _NLPlate_StackOfPlate_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_NLPlate_ListNodeOfStackOfPlate.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoSuchObject;
class NLPlate_ListIteratorOfStackOfPlate;
class Plate_Plate;
class NLPlate_ListNodeOfStackOfPlate;



class NLPlate_StackOfPlate 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT NLPlate_StackOfPlate();
  
  Standard_EXPORT NLPlate_StackOfPlate(const NLPlate_StackOfPlate& Other);
  
  Standard_EXPORT   void Assign (const NLPlate_StackOfPlate& Other) ;
  void operator= (const NLPlate_StackOfPlate& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~NLPlate_StackOfPlate()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const Plate_Plate& I) ;
  
  Standard_EXPORT   void Prepend (const Plate_Plate& I, NLPlate_ListIteratorOfStackOfPlate& theIt) ;
  
  Standard_EXPORT   void Prepend (NLPlate_StackOfPlate& Other) ;
  
  Standard_EXPORT   void Append (const Plate_Plate& I) ;
  
  Standard_EXPORT   void Append (const Plate_Plate& I, NLPlate_ListIteratorOfStackOfPlate& theIt) ;
  
  Standard_EXPORT   void Append (NLPlate_StackOfPlate& Other) ;
  
  Standard_EXPORT   Plate_Plate& First()  const;
  
  Standard_EXPORT   Plate_Plate& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (NLPlate_ListIteratorOfStackOfPlate& It) ;
  
  Standard_EXPORT   void InsertBefore (const Plate_Plate& I, NLPlate_ListIteratorOfStackOfPlate& It) ;
  
  Standard_EXPORT   void InsertBefore (NLPlate_StackOfPlate& Other, NLPlate_ListIteratorOfStackOfPlate& It) ;
  
  Standard_EXPORT   void InsertAfter (const Plate_Plate& I, NLPlate_ListIteratorOfStackOfPlate& It) ;
  
  Standard_EXPORT   void InsertAfter (NLPlate_StackOfPlate& Other, NLPlate_ListIteratorOfStackOfPlate& It) ;


friend class NLPlate_ListIteratorOfStackOfPlate;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item Plate_Plate
#define Item_hxx <Plate_Plate.hxx>
#define TCollection_ListNode NLPlate_ListNodeOfStackOfPlate
#define TCollection_ListNode_hxx <NLPlate_ListNodeOfStackOfPlate.hxx>
#define TCollection_ListIterator NLPlate_ListIteratorOfStackOfPlate
#define TCollection_ListIterator_hxx <NLPlate_ListIteratorOfStackOfPlate.hxx>
#define Handle_TCollection_ListNode Handle_NLPlate_ListNodeOfStackOfPlate
#define TCollection_ListNode_Type_() NLPlate_ListNodeOfStackOfPlate_Type_()
#define TCollection_List NLPlate_StackOfPlate
#define TCollection_List_hxx <NLPlate_StackOfPlate.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _NLPlate_StackOfPlate_HeaderFile
