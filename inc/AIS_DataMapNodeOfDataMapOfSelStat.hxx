// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_DataMapNodeOfDataMapOfSelStat_HeaderFile
#define _AIS_DataMapNodeOfDataMapOfSelStat_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AIS_DataMapNodeOfDataMapOfSelStat.hxx>

#include <Handle_SelectMgr_SelectableObject.hxx>
#include <Handle_AIS_LocalStatus.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class SelectMgr_SelectableObject;
class AIS_LocalStatus;
class TColStd_MapTransientHasher;
class AIS_DataMapOfSelStat;
class AIS_DataMapIteratorOfDataMapOfSelStat;



class AIS_DataMapNodeOfDataMapOfSelStat : public TCollection_MapNode
{

public:

  
    AIS_DataMapNodeOfDataMapOfSelStat(const Handle(SelectMgr_SelectableObject)& K, const Handle(AIS_LocalStatus)& I, const TCollection_MapNodePtr& n);
  
      Handle(SelectMgr_SelectableObject)& Key()  const;
  
      Handle(AIS_LocalStatus)& Value()  const;




  DEFINE_STANDARD_RTTI(AIS_DataMapNodeOfDataMapOfSelStat)

protected:




private: 


  Handle(SelectMgr_SelectableObject) myKey;
  Handle(AIS_LocalStatus) myValue;


};

#define TheKey Handle(SelectMgr_SelectableObject)
#define TheKey_hxx <SelectMgr_SelectableObject.hxx>
#define TheItem Handle(AIS_LocalStatus)
#define TheItem_hxx <AIS_LocalStatus.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode AIS_DataMapNodeOfDataMapOfSelStat
#define TCollection_DataMapNode_hxx <AIS_DataMapNodeOfDataMapOfSelStat.hxx>
#define TCollection_DataMapIterator AIS_DataMapIteratorOfDataMapOfSelStat
#define TCollection_DataMapIterator_hxx <AIS_DataMapIteratorOfDataMapOfSelStat.hxx>
#define Handle_TCollection_DataMapNode Handle_AIS_DataMapNodeOfDataMapOfSelStat
#define TCollection_DataMapNode_Type_() AIS_DataMapNodeOfDataMapOfSelStat_Type_()
#define TCollection_DataMap AIS_DataMapOfSelStat
#define TCollection_DataMap_hxx <AIS_DataMapOfSelStat.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _AIS_DataMapNodeOfDataMapOfSelStat_HeaderFile