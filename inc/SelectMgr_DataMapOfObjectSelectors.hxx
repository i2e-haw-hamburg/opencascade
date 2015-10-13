// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_DataMapOfObjectSelectors_HeaderFile
#define _SelectMgr_DataMapOfObjectSelectors_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_SelectMgr_SelectableObject.hxx>
#include <Handle_SelectMgr_DataMapNodeOfDataMapOfObjectSelectors.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class SelectMgr_SelectableObject;
class SelectMgr_SequenceOfSelector;
class TColStd_MapTransientHasher;
class SelectMgr_DataMapNodeOfDataMapOfObjectSelectors;
class SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors;



class SelectMgr_DataMapOfObjectSelectors  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT SelectMgr_DataMapOfObjectSelectors(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   SelectMgr_DataMapOfObjectSelectors& Assign (const SelectMgr_DataMapOfObjectSelectors& Other) ;
  SelectMgr_DataMapOfObjectSelectors& operator = (const SelectMgr_DataMapOfObjectSelectors& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~SelectMgr_DataMapOfObjectSelectors()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(SelectMgr_SelectableObject)& K, const SelectMgr_SequenceOfSelector& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(SelectMgr_SelectableObject)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(SelectMgr_SelectableObject)& K) ;
  
  Standard_EXPORT  const  SelectMgr_SequenceOfSelector& Find (const Handle(SelectMgr_SelectableObject)& K)  const;
 const  SelectMgr_SequenceOfSelector& operator() (const Handle(SelectMgr_SelectableObject)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   SelectMgr_SequenceOfSelector& ChangeFind (const Handle(SelectMgr_SelectableObject)& K) ;
  SelectMgr_SequenceOfSelector& operator() (const Handle(SelectMgr_SelectableObject)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(SelectMgr_SelectableObject)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(SelectMgr_SelectableObject)& K) ;




protected:





private:

  
  Standard_EXPORT SelectMgr_DataMapOfObjectSelectors(const SelectMgr_DataMapOfObjectSelectors& Other);




};







#endif // _SelectMgr_DataMapOfObjectSelectors_HeaderFile