/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcResourceLevelRelationship.h"
class IFCQUERY_EXPORT IfcProperty;
class IFCQUERY_EXPORT IfcText;
//ENTITY
class IFCQUERY_EXPORT IfcPropertyDependencyRelationship : public IfcResourceLevelRelationship
{ 
public:
	IfcPropertyDependencyRelationship();
	IfcPropertyDependencyRelationship( int id );
	~IfcPropertyDependencyRelationship();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 5; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcPropertyDependencyRelationship"; }
	virtual const std::wstring toString() const;


	// IfcResourceLevelRelationship -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>	m_Name;						//optional
	//  shared_ptr<IfcText>		m_Description;				//optional

	// IfcPropertyDependencyRelationship -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcProperty>	m_DependingProperty;
	shared_ptr<IfcProperty>	m_DependantProperty;
	shared_ptr<IfcText>		m_Expression;				//optional
};

