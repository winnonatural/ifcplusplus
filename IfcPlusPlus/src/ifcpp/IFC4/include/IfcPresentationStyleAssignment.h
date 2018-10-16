/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcStyleAssignmentSelect.h"
class IFCQUERY_EXPORT IfcPresentationStyleSelect;
//ENTITY
class IFCQUERY_EXPORT IfcPresentationStyleAssignment : virtual public IfcStyleAssignmentSelect, public BuildingEntity
{ 
public:
	IfcPresentationStyleAssignment();
	IfcPresentationStyleAssignment( int id );
	~IfcPresentationStyleAssignment();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 1; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcPresentationStyleAssignment"; }
	virtual const std::wstring toString() const;


	// IfcPresentationStyleAssignment -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcPresentationStyleSelect> >	m_Styles;
};

