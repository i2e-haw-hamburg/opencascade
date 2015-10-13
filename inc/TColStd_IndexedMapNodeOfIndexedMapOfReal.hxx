// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_IndexedMapNodeOfIndexedMapOfReal_HeaderFile
#define _TColStd_IndexedMapNodeOfIndexedMapOfReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColStd_IndexedMapNodeOfIndexedMapOfReal.hxx>

#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_MapNode.hxx>
class TColStd_MapRealHasher;
class TColStd_IndexedMapOfReal;



class TColStd_IndexedMapNodeOfIndexedMapOfReal : public TCollection_MapNode
{

public:

  
    TColStd_IndexedMapNodeOfIndexedMapOfReal(const Standard_Real& K1, const Standard_Integer K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Standard_Real& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(TColStd_IndexedMapNodeOfIndexedMapOfReal)

protected:




private: 


  Standard_Real myKey1;
  Standard_Integer myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey Standard_Real
#define TheKey_hxx <Standard_Real.hxx>
#define Hasher TColStd_MapRealHasher
#define Hasher_hxx <TColStd_MapRealHasher.hxx>
#define TCollection_IndexedMapNode TColStd_IndexedMapNodeOfIndexedMapOfReal
#define TCollection_IndexedMapNode_hxx <TColStd_IndexedMapNodeOfIndexedMapOfReal.hxx>
#define Handle_TCollection_IndexedMapNode Handle_TColStd_IndexedMapNodeOfIndexedMapOfReal
#define TCollection_IndexedMapNode_Type_() TColStd_IndexedMapNodeOfIndexedMapOfReal_Type_()
#define TCollection_IndexedMap TColStd_IndexedMapOfReal
#define TCollection_IndexedMap_hxx <TColStd_IndexedMapOfReal.hxx>

#include <TCollection_IndexedMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_hxx
#undef Handle_TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_Type_
#undef TCollection_IndexedMap
#undef TCollection_IndexedMap_hxx




#endif // _TColStd_IndexedMapNodeOfIndexedMapOfReal_HeaderFile