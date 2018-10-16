/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcAddress.h"
class IFCQUERY_EXPORT IfcLabel;
//ENTITY
class IFCQUERY_EXPORT IfcPostalAddress : public IfcAddress
{ 
public:
	IfcPostalAddress();
	IfcPostalAddress( int id );
	~IfcPostalAddress();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 10; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcPostalAddress"; }
	virtual const std::wstring toString() const;


	// IfcAddress -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcAddressTypeEnum>			m_Purpose;					//optional
	//  shared_ptr<IfcText>						m_Description;				//optional
	//  shared_ptr<IfcLabel>					m_UserDefinedPurpose;		//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPerson> >		m_OfPerson_inverse;
	//  std::vector<weak_ptr<IfcOrganization> >	m_OfOrganization_inverse;

	// IfcPostalAddress -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLabel>					m_InternalLocation;			//optional
	std::vector<shared_ptr<IfcLabel> >		m_AddressLines;				//optional
	shared_ptr<IfcLabel>					m_PostalBox;				//optional
	shared_ptr<IfcLabel>					m_Town;						//optional
	shared_ptr<IfcLabel>					m_Region;					//optional
	shared_ptr<IfcLabel>					m_PostalCode;				//optional
	shared_ptr<IfcLabel>					m_Country;					//optional
};

