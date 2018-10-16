/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcShapeModel.h"
//ENTITY
class IFCQUERY_EXPORT IfcShapeRepresentation : public IfcShapeModel
{ 
public:
	IfcShapeRepresentation();
	IfcShapeRepresentation( int id );
	~IfcShapeRepresentation();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcShapeRepresentation"; }
	virtual const std::wstring toString() const;


	// IfcRepresentation -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcRepresentationContext>					m_ContextOfItems;
	//  shared_ptr<IfcLabel>									m_RepresentationIdentifier;	//optional
	//  shared_ptr<IfcLabel>									m_RepresentationType;		//optional
	//  std::vector<shared_ptr<IfcRepresentationItem> >			m_Items;
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRepresentationMap> >			m_RepresentationMap_inverse;
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignments_inverse;
	//  std::vector<weak_ptr<IfcProductRepresentation> >		m_OfProductRepresentation_inverse;

	// IfcShapeModel -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcShapeAspect> >					m_OfShapeAspect_inverse;

	// IfcShapeRepresentation -----------------------------------------------------------
};

