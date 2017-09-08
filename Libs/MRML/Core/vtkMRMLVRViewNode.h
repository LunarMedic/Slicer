/*=auto=========================================================================

  Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Program:   3D Slicer
  Module:    $RCSfile: vtkMRMLVRViewNode.h,v $
  Date:      $Date: 2006/03/19 17:12:28 $
  Version:   $Revision: 1.6 $

=========================================================================auto=*/

#ifndef __vtkMRMLVRViewNode_h
#define __vtkMRMLVRViewNode_h

// VTK includes
#include "vtkMRMLViewNode.h"

/// \brief MRML node to represent a 3D view.
///
/// View node contains view parameters.
class VTK_MRML_EXPORT vtkMRMLVRViewNode
  : public vtkMRMLViewNode
{
public:
  static vtkMRMLVRViewNode *New();
  vtkTypeMacro(vtkMRMLVRViewNode,vtkMRMLViewNode);
  void PrintSelf(ostream& os, vtkIndent indent) VTK_OVERRIDE;

  //--------------------------------------------------------------------------
  /// MRMLNode methods
  //--------------------------------------------------------------------------

  virtual vtkMRMLNode* CreateNodeInstance() VTK_OVERRIDE;

  ///
  /// Read node attributes from XML file
  virtual void ReadXMLAttributes( const char** atts) VTK_OVERRIDE;

  ///
  /// Write this node's information to a MRML file in XML format.
  virtual void WriteXML(ostream& of, int indent) VTK_OVERRIDE;

  ///
  /// Copy the node's attributes to this object
  virtual void Copy(vtkMRMLNode *node) VTK_OVERRIDE;

  ///
  /// Get node XML tag name (like Volume, Model)
  virtual const char* GetNodeTagName() VTK_OVERRIDE;

  /// Return the color the view nodes have for the background by default.
  static double* defaultBackgroundColor();
  static double* defaultBackgroundColor2();


protected:
  vtkMRMLVRViewNode();
  ~vtkMRMLVRViewNode();
  vtkMRMLVRViewNode(const vtkMRMLVRViewNode&);
  void operator=(const vtkMRMLVRViewNode&);
};

#endif
