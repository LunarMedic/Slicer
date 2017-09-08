/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __vtkMRMLVRViewDisplayableManagerFactory_h
#define __vtkMRMLVRViewDisplayableManagerFactory_h

// MRMLDisplayableManager includes
#include "vtkMRMLDisplayableManagerFactory.h"

// VTK includes
#include <vtkSingleton.h>

#include "vtkMRMLDisplayableManagerWin32Header.h"

class vtkRenderer;

/// \brief Factory where displayable manager classes are registered.
///
/// A displayable manager class is responsible to represente a
/// MRMLDisplayable node in a renderer.
class VTK_MRML_DISPLAYABLEMANAGER_EXPORT vtkMRMLVRViewDisplayableManagerFactory
  : public vtkMRMLDisplayableManagerFactory
{
public:

  vtkTypeMacro(vtkMRMLVRViewDisplayableManagerFactory,
                       vtkMRMLDisplayableManagerFactory);
  void PrintSelf(ostream& os, vtkIndent indent) VTK_OVERRIDE;

  /// This is a singleton pattern New.  There will only be ONE
  /// reference to a vtkMRMLVRViewDisplayableManagerFactory object per process. Clients that
  /// call this must call Delete on the object so that the reference counting will work.
  /// The single instance will be unreferenced when the program exits.
  static vtkMRMLVRViewDisplayableManagerFactory *New();

  /// Return the singleton instance with no reference counting.
  static vtkMRMLVRViewDisplayableManagerFactory* GetInstance();

protected:

  vtkMRMLVRViewDisplayableManagerFactory();
  virtual ~vtkMRMLVRViewDisplayableManagerFactory();

  VTK_SINGLETON_DECLARE(vtkMRMLVRViewDisplayableManagerFactory);

private:

  vtkMRMLVRViewDisplayableManagerFactory(const vtkMRMLVRViewDisplayableManagerFactory&);
  void operator=(const vtkMRMLVRViewDisplayableManagerFactory&);

};

#ifndef __VTK_WRAP__
//BTX
VTK_SINGLETON_DECLARE_INITIALIZER(VTK_MRML_DISPLAYABLEMANAGER_EXPORT,
                                  vtkMRMLVRViewDisplayableManagerFactory);
//ETX
#endif // __VTK_WRAP__

#endif
