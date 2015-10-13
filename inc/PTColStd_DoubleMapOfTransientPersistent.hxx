// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_DoubleMapOfTransientPersistent_HeaderFile
#define _PTColStd_DoubleMapOfTransientPersistent_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Standard_Persistent.hxx>
#include <Handle_PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_MultiplyDefined;
class Standard_NoSuchObject;
class Standard_Transient;
class Standard_Persistent;
class TColStd_MapTransientHasher;
class PTColStd_MapPersistentHasher;
class PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent;
class PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent;



class PTColStd_DoubleMapOfTransientPersistent  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PTColStd_DoubleMapOfTransientPersistent(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   PTColStd_DoubleMapOfTransientPersistent& Assign (const PTColStd_DoubleMapOfTransientPersistent& Other) ;
  PTColStd_DoubleMapOfTransientPersistent& operator = (const PTColStd_DoubleMapOfTransientPersistent& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~PTColStd_DoubleMapOfTransientPersistent()
{
  Clear();
}
  
  Standard_EXPORT   void Bind (const Handle(Standard_Transient)& K1, const Handle(Standard_Persistent)& K2) ;
  
  Standard_EXPORT   Standard_Boolean AreBound (const Handle(Standard_Transient)& K1, const Handle(Standard_Persistent)& K2)  const;
  
  Standard_EXPORT   Standard_Boolean IsBound1 (const Handle(Standard_Transient)& K)  const;
  
  Standard_EXPORT   Standard_Boolean IsBound2 (const Handle(Standard_Persistent)& K)  const;
  
  Standard_EXPORT  const  Handle(Standard_Persistent)& Find1 (const Handle(Standard_Transient)& K)  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Find2 (const Handle(Standard_Persistent)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind1 (const Handle(Standard_Transient)& K) ;
  
  Standard_EXPORT   Standard_Boolean UnBind2 (const Handle(Standard_Persistent)& K) ;




protected:





private:

  
  Standard_EXPORT PTColStd_DoubleMapOfTransientPersistent(const PTColStd_DoubleMapOfTransientPersistent& Other);




};







#endif // _PTColStd_DoubleMapOfTransientPersistent_HeaderFile
