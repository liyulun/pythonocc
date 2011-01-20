//  Copyright (C) 2007-2008  CEA/DEN, EDF R&D, OPEN CASCADE
//
//  Copyright (C) 2003-2007  OPEN CASCADE, EADS/CCR, LIP6, CEA/DEN,
//  CEDRAT, EDF R&D, LEG, PRINCIPIA R&D, BUREAU VERITAS
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
//
//  See http://www.salome-platform.org/ or email : webmaster.salome@opencascade.com
//
#ifndef _Handle_NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape_HeaderFile
#define _Handle_NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_TCollection_MapNode_HeaderFile
#include <Handle_TCollection_MapNode.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(TCollection_MapNode);
class NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape);

class Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape) : public Handle(TCollection_MapNode) {
  public:
    Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape)():Handle(TCollection_MapNode)() {} 
    Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape)(const Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape)& aHandle) : Handle(TCollection_MapNode)(aHandle) 
     {
     }

    Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape)(const NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape* anItem) : Handle(TCollection_MapNode)((TCollection_MapNode *)anItem) 
     {
     }

    Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape)& operator=(const Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape)& operator=(const NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape* operator->() const
     {
      return (NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape)();
 
   Standard_EXPORT static const Handle(NMTTools_IndexedDataMapNodeOfIndexedDataMapOfShapeIndexedMapOfShape) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif
