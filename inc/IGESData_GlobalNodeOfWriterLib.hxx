// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_GlobalNodeOfWriterLib_HeaderFile
#define _IGESData_GlobalNodeOfWriterLib_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESData_GlobalNodeOfWriterLib.hxx>

#include <Handle_IGESData_ReadWriteModule.hxx>
#include <Handle_IGESData_Protocol.hxx>
#include <Handle_IGESData_GlobalNodeOfWriterLib.hxx>
#include <Standard_Transient.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_IGESData_NodeOfWriterLib.hxx>
class IGESData_ReadWriteModule;
class IGESData_Protocol;
class IGESData_IGESEntity;
class IGESData_WriterLib;
class IGESData_NodeOfWriterLib;



class IGESData_GlobalNodeOfWriterLib : public Standard_Transient
{

public:

  
  Standard_EXPORT IGESData_GlobalNodeOfWriterLib();
  
  Standard_EXPORT   void Add (const Handle(IGESData_ReadWriteModule)& amodule, const Handle(IGESData_Protocol)& aprotocol) ;
  
  Standard_EXPORT  const  Handle(IGESData_ReadWriteModule)& Module()  const;
  
  Standard_EXPORT  const  Handle(IGESData_Protocol)& Protocol()  const;
  
  Standard_EXPORT  const  Handle(IGESData_GlobalNodeOfWriterLib)& Next()  const;




  DEFINE_STANDARD_RTTI(IGESData_GlobalNodeOfWriterLib)

protected:




private: 


  Handle(IGESData_ReadWriteModule) themod;
  Handle(IGESData_Protocol) theprot;
  Handle(IGESData_GlobalNodeOfWriterLib) thenext;


};







#endif // _IGESData_GlobalNodeOfWriterLib_HeaderFile
