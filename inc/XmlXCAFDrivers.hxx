// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlXCAFDrivers_HeaderFile
#define _XmlXCAFDrivers_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Standard_Transient.hxx>
class Standard_Transient;
class Standard_GUID;
class XmlXCAFDrivers_DocumentRetrievalDriver;
class XmlXCAFDrivers_DocumentStorageDriver;



class XmlXCAFDrivers 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Depending from the  ID, returns a list of  storage
  //! or retrieval attribute drivers. Used for plugin.
  //!
  //! Standard data model drivers
  //! ===========================
  //! 47b0b826-d931-11d1-b5da-00a0c9064368 Transient-Persistent
  //! 47b0b827-d931-11d1-b5da-00a0c9064368 Persistent-Transient
  //!
  //! XCAF data model drivers
  //! =================================
  //! ed8793f8-3142-11d4-b9b5-0060b0ee281b Transient-Persistent
  //! ed8793f9-3142-11d4-b9b5-0060b0ee281b Persistent-Transient
  //! ed8793fa-3142-11d4-b9b5-0060b0ee281b XCAFSchema
  Standard_EXPORT static   Handle(Standard_Transient) Factory (const Standard_GUID& aGUID) ;




protected:





private:




friend class XmlXCAFDrivers_DocumentRetrievalDriver;
friend class XmlXCAFDrivers_DocumentStorageDriver;

};







#endif // _XmlXCAFDrivers_HeaderFile
