/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcAppliedValueSelect.h"
#include "IfcMetricValueSelect.h"
class IFCQUERY_EXPORT IfcValue;
class IFCQUERY_EXPORT IfcUnit;
//ENTITY
class IFCQUERY_EXPORT IfcMeasureWithUnit : virtual public IfcAppliedValueSelect, virtual public IfcMetricValueSelect, public BuildingEntity
{ 
public:
	IfcMeasureWithUnit();
	IfcMeasureWithUnit( int id );
	~IfcMeasureWithUnit();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcMeasureWithUnit"; }
	virtual const std::wstring toString() const;


	// IfcMeasureWithUnit -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcValue>	m_ValueComponent;
	shared_ptr<IfcUnit>		m_UnitComponent;
};

