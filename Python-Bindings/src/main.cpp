#include <pybind11/pybind11.h>
#include "wrapper_header_collection.hpp"
namespace py = pybind11;

#include "TopologicalQuery.cppwg.hpp"
#include "Topology.cppwg.hpp"
#include "Vertex.cppwg.hpp"
#include "Edge.cppwg.hpp"
#include "Wire.cppwg.hpp"
#include "Face.cppwg.hpp"
#include "Cell.cppwg.hpp"
#include "CellComplex.cppwg.hpp"
#include "Cluster.cppwg.hpp"
#include "Aperture.cppwg.hpp"
#include "Graph.cppwg.hpp"
#include "Attribute.cppwg.hpp"
#include "Dictionary.cppwg.hpp"
#include "Shell.cppwg.hpp"
#include "ContentManager.cppwg.hpp"
#include "Context.cppwg.hpp"
#include "IntAttribute.cppwg.hpp"
#include "DoubleAttribute.cppwg.hpp"
#include "StringAttribute.cppwg.hpp"
#include "ListAttribute.cppwg.hpp"
#include "VertexUtility.Binding.h"
#include "EdgeUtility.Binding.h"
#include "WireUtility.Binding.h"
#include "ShellUtility.Binding.h"
#include "CellUtility.Binding.h"
#include "TopologyUtility.Binding.h"
#include "FaceUtility.Binding.h"
#include "GlobalCluster.Binding.h"

PYBIND11_MODULE(topologic, m)
{
    register_TopoDS_Shape_class(m);
    register_TopologicalQuery_class(m);
    register_Topology_class(m);
    register_Vertex_class(m);
    register_Edge_class(m);
    register_Wire_class(m);
    register_Face_class(m);
    register_Cell_class(m);
    register_CellComplex_class(m);
    register_Cluster_class(m);
    register_Aperture_class(m);
    register_Graph_class(m);
    register_Attribute_class(m);
    register_Dictionary_class(m);
    register_Shell_class(m);
    register_ContentManager_class(m);
    register_Context_class(m);
    register_IntAttribute_class(m);
    register_DoubleAttribute_class(m);
    register_StringAttribute_class(m);
    register_ListAttribute_class(m);
    register_VertexUtility_class(m);
    register_EdgeUtility_class(m);
    register_WireUtility_class(m);
    register_ShellUtility_class(m);
    register_CellUtility_class(m);
    register_TopologyUtility_class(m);
    register_FaceUtility_class(m);
    register_GlobalCluster_class(m);
}