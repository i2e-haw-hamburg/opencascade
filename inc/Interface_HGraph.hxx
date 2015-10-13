// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_HGraph_HeaderFile
#define _Interface_HGraph_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Interface_HGraph.hxx>

#include <Interface_Graph.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Interface_Protocol.hxx>
#include <Handle_Interface_GTool.hxx>
class Standard_DomainError;
class Interface_Graph;
class Interface_InterfaceModel;
class Interface_GeneralLib;
class Interface_Protocol;
class Interface_GTool;


//! This class allows to store a redefinable Graph, via a Handle
//! (usefull for an Object which can work on several successive
//! Models, with the same general conditions)
class Interface_HGraph : public MMgt_TShared
{

public:

  
  //! Creates an HGraph directly from a Graph.
  //! Remark that the starting Graph is duplicated
  Standard_EXPORT Interface_HGraph(const Interface_Graph& agraph);
  
  //! Creates an HGraph with a Graph created from <amodel> and <lib>
  Standard_EXPORT Interface_HGraph(const Handle(Interface_InterfaceModel)& amodel, const Interface_GeneralLib& lib, const Standard_Boolean theModeStats = Standard_True);
  
  //! Creates an HGraph with a graph itself created from <amodel>
  //! and <protocol>
  Standard_EXPORT Interface_HGraph(const Handle(Interface_InterfaceModel)& amodel, const Handle(Interface_Protocol)& protocol, const Standard_Boolean theModeStats = Standard_True);
  
  //! Creates an HGraph with a graph itself created from <amodel>
  //! and <protocol>
  Standard_EXPORT Interface_HGraph(const Handle(Interface_InterfaceModel)& amodel, const Handle(Interface_GTool)& gtool, const Standard_Boolean theModeStats = Standard_True);
  
  //! Same a above, but works with the GTool in the model
  Standard_EXPORT Interface_HGraph(const Handle(Interface_InterfaceModel)& amodel, const Standard_Boolean theModeStats = Standard_True);
  
  //! Returns the Graph contained in <me>, for Read Only Operations
  //! Remark that it is returns as "const &"
  //! Getting it in a new variable instead of a reference would be
  //! a pitty, because all the graph's content would be duplicated
  Standard_EXPORT  const  Interface_Graph& Graph()  const;
  
  //! Same as above, but for Read-Write Operations
  //! Then, The Graph will be modified in the HGraph itself
  Standard_EXPORT   Interface_Graph& CGraph() ;




  DEFINE_STANDARD_RTTI(Interface_HGraph)

protected:




private: 


  Interface_Graph thegraph;


};







#endif // _Interface_HGraph_HeaderFile