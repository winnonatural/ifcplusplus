/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcRelConnectsElements.h"
class IFCQUERY_EXPORT IfcElement;
class IFCQUERY_EXPORT IfcLabel;
//ENTITY
class IFCQUERY_EXPORT IfcRelConnectsWithRealizingElements : public IfcRelConnectsElements
{ 
public:
	IfcRelConnectsWithRealizingElements();
	IfcRelConnectsWithRealizingElements( int id );
	~IfcRelConnectsWithRealizingElements();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 9; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRelConnectsWithRealizingElements"; }
	virtual const std::wstring toString() const;


	// IfcRoot -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGloballyUniqueId>			m_GlobalId;
	//  shared_ptr<IfcOwnerHistory>				m_OwnerHistory;				//optional
	//  shared_ptr<IfcLabel>					m_Name;						//optional
	//  shared_ptr<IfcText>						m_Description;				//optional

	// IfcRelationship -----------------------------------------------------------

	// IfcRelConnects -----------------------------------------------------------

	// IfcRelConnectsElements -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcConnectionGeometry>		m_ConnectionGeometry;		//optional
	//  shared_ptr<IfcElement>					m_RelatingElement;
	//  shared_ptr<IfcElement>					m_RelatedElement;

	// IfcRelConnectsWithRealizingElements -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcElement> >	m_RealizingElements;
	shared_ptr<IfcLabel>					m_ConnectionType;			//optional
};

