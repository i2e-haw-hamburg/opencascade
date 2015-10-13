// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapNodeOfDataMapOfIntegerVec2d_HeaderFile
#define _MAT2d_DataMapNodeOfDataMapOfIntegerVec2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerVec2d.hxx>

#include <Standard_Integer.hxx>
#include <gp_Vec2d.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class gp_Vec2d;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapOfIntegerVec2d;
class MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d;



class MAT2d_DataMapNodeOfDataMapOfIntegerVec2d : public TCollection_MapNode
{

public:

  
    MAT2d_DataMapNodeOfDataMapOfIntegerVec2d(const Standard_Integer& K, const gp_Vec2d& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      gp_Vec2d& Value()  const;




  DEFINE_STANDARD_RTTI(MAT2d_DataMapNodeOfDataMapOfIntegerVec2d)

protected:




private: 


  Standard_Integer myKey;
  gp_Vec2d myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem gp_Vec2d
#define TheItem_hxx <gp_Vec2d.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MAT2d_DataMapNodeOfDataMapOfIntegerVec2d
#define TCollection_DataMapNode_hxx <MAT2d_DataMapNodeOfDataMapOfIntegerVec2d.hxx>
#define TCollection_DataMapIterator MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d
#define TCollection_DataMapIterator_hxx <MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d.hxx>
#define Handle_TCollection_DataMapNode Handle_MAT2d_DataMapNodeOfDataMapOfIntegerVec2d
#define TCollection_DataMapNode_Type_() MAT2d_DataMapNodeOfDataMapOfIntegerVec2d_Type_()
#define TCollection_DataMap MAT2d_DataMapOfIntegerVec2d
#define TCollection_DataMap_hxx <MAT2d_DataMapOfIntegerVec2d.hxx>

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




#endif // _MAT2d_DataMapNodeOfDataMapOfIntegerVec2d_HeaderFile