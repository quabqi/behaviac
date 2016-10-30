#include "generated_behaviors_10.h"

namespace behaviac
{
	// Source file: par_test/register_name_as_left_value_and_param

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node1 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node1, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			TNS::ST::PER::WRK::kEmployee opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_STV_KEMPLOYEE_0, TNS::ST::PER::WRK::kEmployee >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			TNS::ST::PER::WRK::kEmployee opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_kEmployeeIR, TNS::ST::PER::WRK::kEmployee, TNS::ST::PER::WRK::kEmployee >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_STV_KEMPLOYEE_0, TNS::ST::PER::WRK::kEmployee >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node4, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			behaviac::vector<TNS::ST::PER::WRK::kEmployee> opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_STV_LIST_KEMPLOYEE_0, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			behaviac::vector<TNS::ST::PER::WRK::kEmployee> opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_kEmployeeListIR, behaviac::vector<TNS::ST::PER::WRK::kEmployee>, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_STV_LIST_KEMPLOYEE_0, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node5 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node5, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			behaviac::vector<signed char> opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_STV_LIST_SBYTE_0, behaviac::vector<signed char> >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			behaviac::vector<signed char> opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_SByteListIR, behaviac::vector<signed char>, behaviac::vector<signed char> >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_STV_LIST_SBYTE_0, behaviac::vector<signed char> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node6 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node6, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			behaviac::Agent* opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_AGENT_0, behaviac::Agent* >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			behaviac::Agent* opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_AgentIR, behaviac::Agent*, behaviac::Agent* >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_AGENT_0, behaviac::Agent* >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node7 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node7, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			unsigned char opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_BYTE_0, unsigned char >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			unsigned char opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_ByteIR, unsigned char, unsigned char >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_BYTE_0, unsigned char >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node8 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node8, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			char opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_CHAR_0, char >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			char opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_CharIR, char, char >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_CHAR_0, char >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node9 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node9, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			TNS::ST::PER::WRK::kEmployee opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_KEMPLOYEE_0, TNS::ST::PER::WRK::kEmployee >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			TNS::ST::PER::WRK::kEmployee opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_kEmployeeIR, TNS::ST::PER::WRK::kEmployee, TNS::ST::PER::WRK::kEmployee >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_KEMPLOYEE_0, TNS::ST::PER::WRK::kEmployee >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node10 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node10, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			behaviac::vector<TNS::ST::PER::WRK::kEmployee> opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_LIST_KEMPLOYEE_0, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			behaviac::vector<TNS::ST::PER::WRK::kEmployee> opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_kEmployeeListIR, behaviac::vector<TNS::ST::PER::WRK::kEmployee>, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_LIST_KEMPLOYEE_0, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node11 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node11, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			signed char opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_SBYTE_0, signed char >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			signed char opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_SByteIR, signed char, signed char >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_SBYTE_0, signed char >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_register_name_as_left_value_and_param_node12 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_register_name_as_left_value_and_param_node12, Assignment);
		Assignment_bt_par_test_register_name_as_left_value_and_param_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr_p0 = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr_p0);
			behaviac::string opr_p0 = ((ParTestRegNameAgent*)pAgent_opr_p0)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_STR_0, behaviac::string >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opr);
			behaviac::string opr = ((ParTestRegNameAgent*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_ParTestRegNameAgent_Func_StringIR, behaviac::string, behaviac::string >(opr_p0);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "ParTestRegNameAgent");
			BEHAVIAC_ASSERT(pAgent_opl);
			((ParTestRegNameAgent*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_ParTestRegNameAgent_TV_STR_0, behaviac::string >() = opr;
			return result;
		}
	};

		bool bt_par_test_register_name_as_left_value_and_param::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("par_test/register_name_as_left_value_and_param");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("EmployeeParTestAgent");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("EmployeeParTestAgent");
#endif
				pBT->AddChild(node0);
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node1* node1 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node1;
					node1->SetClassNameString("Assignment");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node4* node4 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node4;
					node4->SetClassNameString("Assignment");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node5* node5 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node5;
					node5->SetClassNameString("Assignment");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node6* node6 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node6;
					node6->SetClassNameString("Assignment");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node6);
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node7* node7 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node7;
					node7->SetClassNameString("Assignment");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node8* node8 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node8;
					node8->SetClassNameString("Assignment");
					node8->SetId(8);
#if !BEHAVIAC_RELEASE
					node8->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node8);
					node0->SetHasEvents(node0->HasEvents() | node8->HasEvents());
				}
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node9* node9 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node9;
					node9->SetClassNameString("Assignment");
					node9->SetId(9);
#if !BEHAVIAC_RELEASE
					node9->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node9);
					node0->SetHasEvents(node0->HasEvents() | node9->HasEvents());
				}
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node10* node10 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node10;
					node10->SetClassNameString("Assignment");
					node10->SetId(10);
#if !BEHAVIAC_RELEASE
					node10->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node10);
					node0->SetHasEvents(node0->HasEvents() | node10->HasEvents());
				}
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node11* node11 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node11;
					node11->SetClassNameString("Assignment");
					node11->SetId(11);
#if !BEHAVIAC_RELEASE
					node11->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node11);
					node0->SetHasEvents(node0->HasEvents() | node11->HasEvents());
				}
				{
					Assignment_bt_par_test_register_name_as_left_value_and_param_node12* node12 = BEHAVIAC_NEW Assignment_bt_par_test_register_name_as_left_value_and_param_node12;
					node12->SetClassNameString("Assignment");
					node12->SetId(12);
#if !BEHAVIAC_RELEASE
					node12->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node12);
					node0->SetHasEvents(node0->HasEvents() | node12->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: par_test/static_member_function_test_0

	class Assignment_bt_par_test_static_member_function_test_0_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node4, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			char opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_CHAR_0, char >();
			char opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_CharSMF, char, char >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_CHAR_0, char >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node5 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node5, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			unsigned char opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_BYTE_0, unsigned char >();
			unsigned char opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_ByteSMF, unsigned char, unsigned char >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_BYTE_0, unsigned char >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node6 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node6, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			signed char opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_SBYTE_0, signed char >();
			signed char opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_SByteSMF, signed char, signed char >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_SBYTE_0, signed char >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node7 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node7, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<char> opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_LIST_CHAR_0, behaviac::vector<char> >();
			behaviac::vector<char> opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_CharListSMF, behaviac::vector<char>, behaviac::vector<char> >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_LIST_CHAR_0, behaviac::vector<char> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node8 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node8, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<signed char> opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_LIST_SBYTE_0, behaviac::vector<signed char> >();
			behaviac::vector<signed char> opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_SByteListSMF, behaviac::vector<signed char>, behaviac::vector<signed char> >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_TV_LIST_SBYTE_0, behaviac::vector<signed char> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node9 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node9, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			TNS::ST::PER::WRK::kEmployee opr_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_TV_KEMPLOYEE_0, TNS::ST::PER::WRK::kEmployee >();
			TNS::ST::PER::WRK::kEmployee opr = ((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_kEmployeeSMF, TNS::ST::PER::WRK::kEmployee, TNS::ST::PER::WRK::kEmployee >(opr_p0);
			((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_TV_KEMPLOYEE_0, TNS::ST::PER::WRK::kEmployee >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node10 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node10, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<TNS::ST::PER::WRK::kEmployee> opr_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_TV_LIST_KEMPLOYEE_0, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >();
			behaviac::vector<TNS::ST::PER::WRK::kEmployee> opr = ((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_kEmployeeListSMF, behaviac::vector<TNS::ST::PER::WRK::kEmployee>, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >(opr_p0);
			((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_TV_LIST_KEMPLOYEE_0, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node11 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node11, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node11()
		{
			opr_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			unsigned long opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_ULongSMF, unsigned long, unsigned long >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_TV_ULONG_0, unsigned long >() = opr;
			return result;
		}
		unsigned long opr_p0;
	};

	class Assignment_bt_par_test_static_member_function_test_0_node12 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node12, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::string opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_TV_STR_0, behaviac::string >();
			behaviac::string opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_StringSMF, behaviac::string, behaviac::string& >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_TV_STR_0, behaviac::string >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node13 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node13, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<behaviac::string> opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_TV_LIST_STR_0, behaviac::vector<behaviac::string> >();
			behaviac::vector<behaviac::string> opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_StringListSMF, behaviac::vector<behaviac::string>, behaviac::vector<behaviac::string> >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_TV_LIST_STR_0, behaviac::vector<behaviac::string> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node14 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node14, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::Agent* opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_TV_AGENT_0, behaviac::Agent* >();
			behaviac::Agent* opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_AgentSMF, behaviac::Agent*, behaviac::Agent* >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_TV_AGENT_0, behaviac::Agent* >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_member_function_test_0_node15 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_member_function_test_0_node15, Assignment);
		Assignment_bt_par_test_static_member_function_test_0_node15()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<behaviac::Agent*> opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_TV_LIST_AGENT_0, behaviac::vector<behaviac::Agent*> >();
			behaviac::vector<behaviac::Agent*> opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_AgentListSMF, behaviac::vector<behaviac::Agent*>, behaviac::vector<behaviac::Agent*> >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_TV_LIST_AGENT_0, behaviac::vector<behaviac::Agent*> >() = opr;
			return result;
		}
	};

		bool bt_par_test_static_member_function_test_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("par_test/static_member_function_test_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("EmployeeParTestAgent");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("EmployeeParTestAgent");
#endif
				pBT->AddChild(node0);
				{
					Sequence* node1 = BEHAVIAC_NEW Sequence;
					node1->SetClassNameString("Sequence");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node1);
					{
						Assignment_bt_par_test_static_member_function_test_0_node4* node4 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node4;
						node4->SetClassNameString("Assignment");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node4);
						node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
					}
					{
						Assignment_bt_par_test_static_member_function_test_0_node5* node5 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node5;
						node5->SetClassNameString("Assignment");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node5);
						node1->SetHasEvents(node1->HasEvents() | node5->HasEvents());
					}
					{
						Assignment_bt_par_test_static_member_function_test_0_node6* node6 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node6;
						node6->SetClassNameString("Assignment");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node6);
						node1->SetHasEvents(node1->HasEvents() | node6->HasEvents());
					}
					{
						Assignment_bt_par_test_static_member_function_test_0_node7* node7 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node7;
						node7->SetClassNameString("Assignment");
						node7->SetId(7);
#if !BEHAVIAC_RELEASE
						node7->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node7);
						node1->SetHasEvents(node1->HasEvents() | node7->HasEvents());
					}
					{
						Assignment_bt_par_test_static_member_function_test_0_node8* node8 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node8;
						node8->SetClassNameString("Assignment");
						node8->SetId(8);
#if !BEHAVIAC_RELEASE
						node8->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node8);
						node1->SetHasEvents(node1->HasEvents() | node8->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Sequence* node2 = BEHAVIAC_NEW Sequence;
					node2->SetClassNameString("Sequence");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node2);
					{
						Assignment_bt_par_test_static_member_function_test_0_node9* node9 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node9;
						node9->SetClassNameString("Assignment");
						node9->SetId(9);
#if !BEHAVIAC_RELEASE
						node9->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node9);
						node2->SetHasEvents(node2->HasEvents() | node9->HasEvents());
					}
					{
						Assignment_bt_par_test_static_member_function_test_0_node10* node10 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node10;
						node10->SetClassNameString("Assignment");
						node10->SetId(10);
#if !BEHAVIAC_RELEASE
						node10->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node10);
						node2->SetHasEvents(node2->HasEvents() | node10->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Sequence* node3 = BEHAVIAC_NEW Sequence;
					node3->SetClassNameString("Sequence");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node3);
					{
						Assignment_bt_par_test_static_member_function_test_0_node11* node11 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node11;
						node11->SetClassNameString("Assignment");
						node11->SetId(11);
#if !BEHAVIAC_RELEASE
						node11->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node11);
						node3->SetHasEvents(node3->HasEvents() | node11->HasEvents());
					}
					{
						Assignment_bt_par_test_static_member_function_test_0_node12* node12 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node12;
						node12->SetClassNameString("Assignment");
						node12->SetId(12);
#if !BEHAVIAC_RELEASE
						node12->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node12);
						node3->SetHasEvents(node3->HasEvents() | node12->HasEvents());
					}
					{
						Assignment_bt_par_test_static_member_function_test_0_node13* node13 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node13;
						node13->SetClassNameString("Assignment");
						node13->SetId(13);
#if !BEHAVIAC_RELEASE
						node13->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node13);
						node3->SetHasEvents(node3->HasEvents() | node13->HasEvents());
					}
					{
						Assignment_bt_par_test_static_member_function_test_0_node14* node14 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node14;
						node14->SetClassNameString("Assignment");
						node14->SetId(14);
#if !BEHAVIAC_RELEASE
						node14->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node14);
						node3->SetHasEvents(node3->HasEvents() | node14->HasEvents());
					}
					{
						Assignment_bt_par_test_static_member_function_test_0_node15* node15 = BEHAVIAC_NEW Assignment_bt_par_test_static_member_function_test_0_node15;
						node15->SetClassNameString("Assignment");
						node15->SetId(15);
#if !BEHAVIAC_RELEASE
						node15->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node15);
						node3->SetHasEvents(node3->HasEvents() | node15->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: par_test/static_property_as_left_value_and_param

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node4, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			TNS::NE::NAT::eColor opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_ECOLOR_0, TNS::NE::NAT::eColor >();
			TNS::NE::NAT::eColor opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_eColorIR, TNS::NE::NAT::eColor, TNS::NE::NAT::eColor >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_ECOLOR_0, TNS::NE::NAT::eColor >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node5 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node5, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			bool opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_BOOL_0, bool >();
			bool opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_BooleanIR, bool, bool >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_BOOL_0, bool >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node6 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node6, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			char opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_CHAR_0, char >();
			char opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_CharIR, char, char >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_CHAR_0, char >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node7 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node7, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<TNS::NE::NAT::eColor> opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_ECOLOR_0, behaviac::vector<TNS::NE::NAT::eColor> >();
			behaviac::vector<TNS::NE::NAT::eColor> opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_eColorListIR, behaviac::vector<TNS::NE::NAT::eColor>, behaviac::vector<TNS::NE::NAT::eColor> >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_ECOLOR_0, behaviac::vector<TNS::NE::NAT::eColor> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node8 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node8, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<bool> opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_BOOL_0, behaviac::vector<bool> >();
			behaviac::vector<bool> opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_BooleanListIR, behaviac::vector<bool>, behaviac::vector<bool> >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_BOOL_0, behaviac::vector<bool> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node9 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node9, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<char> opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_CHAR_0, behaviac::vector<char> >();
			behaviac::vector<char> opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_CharListIR, behaviac::vector<char>, behaviac::vector<char> >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_CHAR_0, behaviac::vector<char> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node10 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node10, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<signed char> opr_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_SBYTE_0, behaviac::vector<signed char> >();
			behaviac::vector<signed char> opr = ((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_SByteListIR, behaviac::vector<signed char>, behaviac::vector<signed char> >(opr_p0);
			((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_SBYTE_0, behaviac::vector<signed char> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node15 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node15, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node15()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_INT_0, int >();
			int opr = ((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_IntIR, int, int >(opr_p0);
			((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_INT_0, int >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node12 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node12, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			TNS::ST::PER::WRK::kEmployee opr_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_KEMPLOYEE_0, TNS::ST::PER::WRK::kEmployee >();
			TNS::ST::PER::WRK::kEmployee opr = ((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_kEmployeeIR, TNS::ST::PER::WRK::kEmployee, TNS::ST::PER::WRK::kEmployee >(opr_p0);
			((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_KEMPLOYEE_0, TNS::ST::PER::WRK::kEmployee >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node13 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node13, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<int> opr_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_LIST_INT_0, behaviac::vector<int> >();
			behaviac::vector<int> opr = ((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_IntListIR, behaviac::vector<int>, behaviac::vector<int> >(opr_p0);
			((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_LIST_INT_0, behaviac::vector<int> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node11 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node11, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<TNS::ST::PER::WRK::kEmployee> opr_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_LIST_KEMPLOYEE_0, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >();
			behaviac::vector<TNS::ST::PER::WRK::kEmployee> opr = ((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_kEmployeeListIR, behaviac::vector<TNS::ST::PER::WRK::kEmployee>, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >(opr_p0);
			((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_LIST_KEMPLOYEE_0, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node14 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node14, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_F_0, float >();
			float opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_SingleIR, float, float >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_F_0, float >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node19 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node19, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node19()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::string opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_STR_0, behaviac::string >();
			behaviac::string opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_StringIR, behaviac::string, behaviac::string& >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_STR_0, behaviac::string >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node17 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node17, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node17()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::Agent* opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_AGENT_0, behaviac::Agent* >();
			behaviac::Agent* opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_AgentIR, behaviac::Agent*, behaviac::Agent* >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_AGENT_0, behaviac::Agent* >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node18 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node18, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node18()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<float> opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_LIST_F_0, behaviac::vector<float> >();
			behaviac::vector<float> opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_SingleListIR, behaviac::vector<float>, behaviac::vector<float> >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_LIST_F_0, behaviac::vector<float> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node16 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node16, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node16()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<behaviac::string> opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_LIST_STR_0, behaviac::vector<behaviac::string> >();
			behaviac::vector<behaviac::string> opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_StringListIR, behaviac::vector<behaviac::string>, behaviac::vector<behaviac::string> >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_LIST_STR_0, behaviac::vector<behaviac::string> >() = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_static_property_as_left_value_and_param_node20 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_static_property_as_left_value_and_param_node20, Assignment);
		Assignment_bt_par_test_static_property_as_left_value_and_param_node20()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<behaviac::Agent*> opr_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_LIST_AGENT_0, behaviac::vector<behaviac::Agent*> >();
			behaviac::vector<behaviac::Agent*> opr = ((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_AgentListIR, behaviac::vector<behaviac::Agent*>, behaviac::vector<behaviac::Agent*> >(opr_p0);
			((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_LIST_AGENT_0, behaviac::vector<behaviac::Agent*> >() = opr;
			return result;
		}
	};

		bool bt_par_test_static_property_as_left_value_and_param::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("par_test/static_property_as_left_value_and_param");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("EmployeeParTestAgent");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("EmployeeParTestAgent");
#endif
				pBT->AddChild(node0);
				{
					Sequence* node1 = BEHAVIAC_NEW Sequence;
					node1->SetClassNameString("Sequence");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node1);
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node4* node4 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node4;
						node4->SetClassNameString("Assignment");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node4);
						node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node5* node5 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node5;
						node5->SetClassNameString("Assignment");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node5);
						node1->SetHasEvents(node1->HasEvents() | node5->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node6* node6 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node6;
						node6->SetClassNameString("Assignment");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node6);
						node1->SetHasEvents(node1->HasEvents() | node6->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node7* node7 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node7;
						node7->SetClassNameString("Assignment");
						node7->SetId(7);
#if !BEHAVIAC_RELEASE
						node7->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node7);
						node1->SetHasEvents(node1->HasEvents() | node7->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node8* node8 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node8;
						node8->SetClassNameString("Assignment");
						node8->SetId(8);
#if !BEHAVIAC_RELEASE
						node8->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node8);
						node1->SetHasEvents(node1->HasEvents() | node8->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node9* node9 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node9;
						node9->SetClassNameString("Assignment");
						node9->SetId(9);
#if !BEHAVIAC_RELEASE
						node9->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node9);
						node1->SetHasEvents(node1->HasEvents() | node9->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node10* node10 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node10;
						node10->SetClassNameString("Assignment");
						node10->SetId(10);
#if !BEHAVIAC_RELEASE
						node10->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node10);
						node1->SetHasEvents(node1->HasEvents() | node10->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Sequence* node2 = BEHAVIAC_NEW Sequence;
					node2->SetClassNameString("Sequence");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node2);
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node15* node15 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node15;
						node15->SetClassNameString("Assignment");
						node15->SetId(15);
#if !BEHAVIAC_RELEASE
						node15->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node15);
						node2->SetHasEvents(node2->HasEvents() | node15->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node12* node12 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node12;
						node12->SetClassNameString("Assignment");
						node12->SetId(12);
#if !BEHAVIAC_RELEASE
						node12->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node12);
						node2->SetHasEvents(node2->HasEvents() | node12->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node13* node13 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node13;
						node13->SetClassNameString("Assignment");
						node13->SetId(13);
#if !BEHAVIAC_RELEASE
						node13->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node13);
						node2->SetHasEvents(node2->HasEvents() | node13->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node11* node11 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node11;
						node11->SetClassNameString("Assignment");
						node11->SetId(11);
#if !BEHAVIAC_RELEASE
						node11->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node11);
						node2->SetHasEvents(node2->HasEvents() | node11->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Sequence* node3 = BEHAVIAC_NEW Sequence;
					node3->SetClassNameString("Sequence");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node3);
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node14* node14 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node14;
						node14->SetClassNameString("Assignment");
						node14->SetId(14);
#if !BEHAVIAC_RELEASE
						node14->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node14);
						node3->SetHasEvents(node3->HasEvents() | node14->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node19* node19 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node19;
						node19->SetClassNameString("Assignment");
						node19->SetId(19);
#if !BEHAVIAC_RELEASE
						node19->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node19);
						node3->SetHasEvents(node3->HasEvents() | node19->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node17* node17 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node17;
						node17->SetClassNameString("Assignment");
						node17->SetId(17);
#if !BEHAVIAC_RELEASE
						node17->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node17);
						node3->SetHasEvents(node3->HasEvents() | node17->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node18* node18 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node18;
						node18->SetClassNameString("Assignment");
						node18->SetId(18);
#if !BEHAVIAC_RELEASE
						node18->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node18);
						node3->SetHasEvents(node3->HasEvents() | node18->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node16* node16 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node16;
						node16->SetClassNameString("Assignment");
						node16->SetId(16);
#if !BEHAVIAC_RELEASE
						node16->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node16);
						node3->SetHasEvents(node3->HasEvents() | node16->HasEvents());
					}
					{
						Assignment_bt_par_test_static_property_as_left_value_and_param_node20* node20 = BEHAVIAC_NEW Assignment_bt_par_test_static_property_as_left_value_and_param_node20;
						node20->SetClassNameString("Assignment");
						node20->SetId(20);
#if !BEHAVIAC_RELEASE
						node20->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node20);
						node3->SetHasEvents(node3->HasEvents() | node20->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: par_test/static_property_as_ref_param

	class Action_bt_par_test_static_property_as_ref_param_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node4, Action);
		Action_bt_par_test_static_property_as_ref_param_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			TNS::NE::NAT::eColor method_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_ECOLOR_0, TNS::NE::NAT::eColor >();
			((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_eColorRef, void, TNS::NE::NAT::eColor& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_ECOLOR_0") == 1356537398u);
			pAgent->SetVariable("STV_ECOLOR_0", method_p0, 1356537398u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node5, Action);
		Action_bt_par_test_static_property_as_ref_param_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			bool method_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_BOOL_0, bool >();
			((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_BooleanRef, void, bool& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_BOOL_0") == 907888646u);
			pAgent->SetVariable("STV_BOOL_0", method_p0, 907888646u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node6, Action);
		Action_bt_par_test_static_property_as_ref_param_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			char method_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_CHAR_0, char >();
			((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_CharRef, void, char& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_CHAR_0") == 2191125959u);
			pAgent->SetVariable("STV_CHAR_0", method_p0, 2191125959u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node7 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node7, Action);
		Action_bt_par_test_static_property_as_ref_param_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::vector<TNS::NE::NAT::eColor> method_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_ECOLOR_0, behaviac::vector<TNS::NE::NAT::eColor> >();
			((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_eColorListRef, void, behaviac::vector<TNS::NE::NAT::eColor>& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_LIST_ECOLOR_0") == 2487001405u);
			pAgent->SetVariable("STV_LIST_ECOLOR_0", method_p0, 2487001405u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node8 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node8, Action);
		Action_bt_par_test_static_property_as_ref_param_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::vector<bool> method_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_BOOL_0, behaviac::vector<bool> >();
			((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_BooleanListRef, void, behaviac::vector<bool>& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_LIST_BOOL_0") == 1612090457u);
			pAgent->SetVariable("STV_LIST_BOOL_0", method_p0, 1612090457u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node9, Action);
		Action_bt_par_test_static_property_as_ref_param_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::vector<char> method_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_CHAR_0, behaviac::vector<char> >();
			((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_CharListRef, void, behaviac::vector<char>& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_LIST_CHAR_0") == 3566348696u);
			pAgent->SetVariable("STV_LIST_CHAR_0", method_p0, 3566348696u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node10 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node10, Action);
		Action_bt_par_test_static_property_as_ref_param_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::vector<signed char> method_p0 = ((ParTestAgentBase*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgentBase_STV_LIST_SBYTE_0, behaviac::vector<signed char> >();
			((ParTestAgentBase*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgentBase_Func_SByteListRef, void, behaviac::vector<signed char>& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_LIST_SBYTE_0") == 2135462866u);
			pAgent->SetVariable("STV_LIST_SBYTE_0", method_p0, 2135462866u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node15 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node15, Action);
		Action_bt_par_test_static_property_as_ref_param_node15()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int method_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_INT_0, int >();
			((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_IntRef, void, int& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_INT_0") == 1841109764u);
			pAgent->SetVariable("STV_INT_0", method_p0, 1841109764u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node12 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node12, Action);
		Action_bt_par_test_static_property_as_ref_param_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			TNS::ST::PER::WRK::kEmployee method_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_KEMPLOYEE_0, TNS::ST::PER::WRK::kEmployee >();
			((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_kEmployeeRef, void, TNS::ST::PER::WRK::kEmployee& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_KEMPLOYEE_0") == 197916387u);
			pAgent->SetVariable("STV_KEMPLOYEE_0", method_p0, 197916387u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node13 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node13, Action);
		Action_bt_par_test_static_property_as_ref_param_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::vector<int> method_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_LIST_INT_0, behaviac::vector<int> >();
			((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_IntListRef, void, behaviac::vector<int>& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_LIST_INT_0") == 1272574615u);
			pAgent->SetVariable("STV_LIST_INT_0", method_p0, 1272574615u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node11 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node11, Action);
		Action_bt_par_test_static_property_as_ref_param_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::vector<TNS::ST::PER::WRK::kEmployee> method_p0 = ((ParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_ParTestAgent_STV_LIST_KEMPLOYEE_0, behaviac::vector<TNS::ST::PER::WRK::kEmployee> >();
			((ParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_ParTestAgent_Func_kEmployeeListRef, void, behaviac::vector<TNS::ST::PER::WRK::kEmployee>& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_LIST_KEMPLOYEE_0") == 1924897476u);
			pAgent->SetVariable("STV_LIST_KEMPLOYEE_0", method_p0, 1924897476u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node14 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node14, Action);
		Action_bt_par_test_static_property_as_ref_param_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			float method_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_F_0, float >();
			((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_SingleRef, void, float& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_F_0") == 1858562011u);
			pAgent->SetVariable("STV_F_0", method_p0, 1858562011u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node16 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node16, Action);
		Action_bt_par_test_static_property_as_ref_param_node16()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::string method_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_STR_0, behaviac::string >();
			((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_StringRef, void, behaviac::string& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_STR_0") == 3234589190u);
			pAgent->SetVariable("STV_STR_0", method_p0, 3234589190u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node17 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node17, Action);
		Action_bt_par_test_static_property_as_ref_param_node17()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::Agent* method_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_AGENT_0, behaviac::Agent* >();
			((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_AgentRef, void, behaviac::Agent*& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_AGENT_0") == 2845805842u);
			pAgent->SetVariable("STV_AGENT_0", method_p0, 2845805842u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node18 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node18, Action);
		Action_bt_par_test_static_property_as_ref_param_node18()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::vector<float> method_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_LIST_F_0, behaviac::vector<float> >();
			((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_SingleListRef, void, behaviac::vector<float>& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_LIST_F_0") == 2648216995u);
			pAgent->SetVariable("STV_LIST_F_0", method_p0, 2648216995u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node19 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node19, Action);
		Action_bt_par_test_static_property_as_ref_param_node19()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::vector<behaviac::string> method_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_LIST_STR_0, behaviac::vector<behaviac::string> >();
			((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_StringListRef, void, behaviac::vector<behaviac::string>& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_LIST_STR_0") == 3870229397u);
			pAgent->SetVariable("STV_LIST_STR_0", method_p0, 3870229397u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_static_property_as_ref_param_node20 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_static_property_as_ref_param_node20, Action);
		Action_bt_par_test_static_property_as_ref_param_node20()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::vector<behaviac::Agent*> method_p0 = ((EmployeeParTestAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_EmployeeParTestAgent_STV_LIST_AGENT_0, behaviac::vector<behaviac::Agent*> >();
			((EmployeeParTestAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_EmployeeParTestAgent_Func_AgentListRef, void, behaviac::vector<behaviac::Agent*>& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("STV_LIST_AGENT_0") == 2769286938u);
			pAgent->SetVariable("STV_LIST_AGENT_0", method_p0, 2769286938u);
			return BT_SUCCESS;
		}
	};

		bool bt_par_test_static_property_as_ref_param::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("par_test/static_property_as_ref_param");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("EmployeeParTestAgent");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("EmployeeParTestAgent");
#endif
				pBT->AddChild(node0);
				{
					Sequence* node1 = BEHAVIAC_NEW Sequence;
					node1->SetClassNameString("Sequence");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node1);
					{
						Action_bt_par_test_static_property_as_ref_param_node4* node4 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node4;
						node4->SetClassNameString("Action");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node4);
						node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node5* node5 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node5;
						node5->SetClassNameString("Action");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node5);
						node1->SetHasEvents(node1->HasEvents() | node5->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node6* node6 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node6;
						node6->SetClassNameString("Action");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node6);
						node1->SetHasEvents(node1->HasEvents() | node6->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node7* node7 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node7;
						node7->SetClassNameString("Action");
						node7->SetId(7);
#if !BEHAVIAC_RELEASE
						node7->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node7);
						node1->SetHasEvents(node1->HasEvents() | node7->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node8* node8 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node8;
						node8->SetClassNameString("Action");
						node8->SetId(8);
#if !BEHAVIAC_RELEASE
						node8->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node8);
						node1->SetHasEvents(node1->HasEvents() | node8->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node9* node9 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node9;
						node9->SetClassNameString("Action");
						node9->SetId(9);
#if !BEHAVIAC_RELEASE
						node9->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node9);
						node1->SetHasEvents(node1->HasEvents() | node9->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node10* node10 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node10;
						node10->SetClassNameString("Action");
						node10->SetId(10);
#if !BEHAVIAC_RELEASE
						node10->SetAgentType("EmployeeParTestAgent");
#endif
						node1->AddChild(node10);
						node1->SetHasEvents(node1->HasEvents() | node10->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Sequence* node2 = BEHAVIAC_NEW Sequence;
					node2->SetClassNameString("Sequence");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node2);
					{
						Action_bt_par_test_static_property_as_ref_param_node15* node15 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node15;
						node15->SetClassNameString("Action");
						node15->SetId(15);
#if !BEHAVIAC_RELEASE
						node15->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node15);
						node2->SetHasEvents(node2->HasEvents() | node15->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node12* node12 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node12;
						node12->SetClassNameString("Action");
						node12->SetId(12);
#if !BEHAVIAC_RELEASE
						node12->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node12);
						node2->SetHasEvents(node2->HasEvents() | node12->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node13* node13 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node13;
						node13->SetClassNameString("Action");
						node13->SetId(13);
#if !BEHAVIAC_RELEASE
						node13->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node13);
						node2->SetHasEvents(node2->HasEvents() | node13->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node11* node11 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node11;
						node11->SetClassNameString("Action");
						node11->SetId(11);
#if !BEHAVIAC_RELEASE
						node11->SetAgentType("EmployeeParTestAgent");
#endif
						node2->AddChild(node11);
						node2->SetHasEvents(node2->HasEvents() | node11->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Sequence* node3 = BEHAVIAC_NEW Sequence;
					node3->SetClassNameString("Sequence");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("EmployeeParTestAgent");
#endif
					node0->AddChild(node3);
					{
						Action_bt_par_test_static_property_as_ref_param_node14* node14 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node14;
						node14->SetClassNameString("Action");
						node14->SetId(14);
#if !BEHAVIAC_RELEASE
						node14->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node14);
						node3->SetHasEvents(node3->HasEvents() | node14->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node16* node16 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node16;
						node16->SetClassNameString("Action");
						node16->SetId(16);
#if !BEHAVIAC_RELEASE
						node16->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node16);
						node3->SetHasEvents(node3->HasEvents() | node16->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node17* node17 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node17;
						node17->SetClassNameString("Action");
						node17->SetId(17);
#if !BEHAVIAC_RELEASE
						node17->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node17);
						node3->SetHasEvents(node3->HasEvents() | node17->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node18* node18 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node18;
						node18->SetClassNameString("Action");
						node18->SetId(18);
#if !BEHAVIAC_RELEASE
						node18->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node18);
						node3->SetHasEvents(node3->HasEvents() | node18->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node19* node19 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node19;
						node19->SetClassNameString("Action");
						node19->SetId(19);
#if !BEHAVIAC_RELEASE
						node19->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node19);
						node3->SetHasEvents(node3->HasEvents() | node19->HasEvents());
					}
					{
						Action_bt_par_test_static_property_as_ref_param_node20* node20 = BEHAVIAC_NEW Action_bt_par_test_static_property_as_ref_param_node20;
						node20->SetClassNameString("Action");
						node20->SetId(20);
#if !BEHAVIAC_RELEASE
						node20->SetAgentType("EmployeeParTestAgent");
#endif
						node3->AddChild(node20);
						node3->SetHasEvents(node3->HasEvents() | node20->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: par_test/vector_test

	class Assignment_bt_par_test_vector_test_node0 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_vector_test_node0, Assignment);
		Assignment_bt_par_test_vector_test_node0()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::vector<int> opr = ((TestNS::AgentArrayAccessTest*)pAgent)->_Get_Property_<TestNS::PROPERTY_TYPE_TestNS_AgentArrayAccessTest_ListInts, behaviac::vector<int> >();
			int opr_index = 0;
			((TestNS::AgentArrayAccessTest*)pAgent)->_Get_Property_<TestNS::PROPERTY_TYPE_TestNS_AgentArrayAccessTest_Int, int >() = (opr)[opr_index];
			return result;
		}
	};

	class Assignment_bt_par_test_vector_test_node1 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_vector_test_node1, Assignment);
		Assignment_bt_par_test_vector_test_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_ListInts") == 2521109666u);
			vector<int >& opr = (vector<int >&)pAgent->GetVariable<vector<int > >(2521109666u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_Int") == 3849503314u);
			int opr_index = 0;
			pAgent->SetVariable("c_Int", (opr)[opr_index], 3849503314u);
			return result;
		}
	};

	class Assignment_bt_par_test_vector_test_node16 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_vector_test_node16, Assignment);
		Assignment_bt_par_test_vector_test_node16()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 100;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("l_ListInts") == 96329828u);
			int opl_index = 0;
			((behaviac::vector<int >&)pAgent->GetVariable<behaviac::vector<int > >(96329828u))[opl_index] = opr;
			return result;
		}
	};

	class Assignment_bt_par_test_vector_test_node2 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_vector_test_node2, Assignment);
		Assignment_bt_par_test_vector_test_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("l_ListInts") == 96329828u);
			vector<int >& opr = (vector<int >&)pAgent->GetVariable<vector<int > >(96329828u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("l_Int") == 337932423u);
			int opr_index = 0;
			pAgent->SetVariable("l_Int", (opr)[opr_index], 337932423u);
			return result;
		}
	};

	class Assignment_bt_par_test_vector_test_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_vector_test_node4, Assignment);
		Assignment_bt_par_test_vector_test_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 0;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("l_index") == 1109890112u);
			pAgent->SetVariable("l_index", opr, 1109890112u);
			return result;
		}
	};

	class Compute_bt_par_test_vector_test_node3 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_par_test_vector_test_node3, Compute);
		Compute_bt_par_test_vector_test_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_Int") == 3849503314u);
			int& opr1 = (int&)pAgent->GetVariable<int >(3849503314u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("l_Int") == 337932423u);
			int& opr2 = (int&)pAgent->GetVariable<int >(337932423u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("l_index") == 1109890112u);
			int& opl_index = (int&)pAgent->GetVariable<int >(1109890112u);
			(((TestNS::AgentArrayAccessTest*)pAgent)->_Get_Property_<TestNS::PROPERTY_TYPE_TestNS_AgentArrayAccessTest_ListInts, behaviac::vector<int> >())[opl_index] = (int)(opr1 + opr2);
			return result;
		}
	};

	class Assignment_bt_par_test_vector_test_node5 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_vector_test_node5, Assignment);
		Assignment_bt_par_test_vector_test_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("l_ListInts") == 96329828u);
			TList<vector<int> > opr_p0 = &((behaviac::vector<int>&)pAgent->GetVariable<behaviac::vector<int> >(96329828u));
			int opr = ((behaviac::Agent*)pAgent)->_Execute_Method_<behaviac::METHOD_TYPE_behaviac_Agent_VectorLength, int, IList& >(opr_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_Count") == 1209342235u);
			pAgent->SetVariable("c_Count", opr, 1209342235u);
			return result;
		}
	};

	class Action_bt_par_test_vector_test_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_vector_test_node6, Action);
		Action_bt_par_test_vector_test_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_ListInts") == 2521109666u);
			TList<vector<int> > method_p0 = &((behaviac::vector<int>&)pAgent->GetVariable<behaviac::vector<int> >(2521109666u));
			int method_p1 = ((TestNS::AgentArrayAccessTest*)pAgent)->_Get_Property_<TestNS::PROPERTY_TYPE_TestNS_AgentArrayAccessTest_Int, int >();
			((behaviac::Agent*)pAgent)->_Execute_Method_<behaviac::METHOD_TYPE_behaviac_Agent_VectorAdd, void, IList&, System::Object& >(method_p0, *(System::Object*)&method_p1);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_ListInts") == 2521109666u);
			pAgent->SetVariable("c_ListInts", *method_p0.vector_, 2521109666u);
			return BT_SUCCESS;
		}
	};

	class Action_bt_par_test_vector_test_node7 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_vector_test_node7, Action);
		Action_bt_par_test_vector_test_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_ListInts") == 2521109666u);
			TList<vector<int> > method_p0 = &((behaviac::vector<int>&)pAgent->GetVariable<behaviac::vector<int> >(2521109666u));
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_Int") == 3849503314u);
			int& method_p1 = (int&)pAgent->GetVariable<int >(3849503314u);
			((behaviac::Agent*)pAgent)->_Execute_Method_<behaviac::METHOD_TYPE_behaviac_Agent_VectorRemove, void, IList&, System::Object& >(method_p0, *(System::Object*)&method_p1);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_ListInts") == 2521109666u);
			pAgent->SetVariable("c_ListInts", *method_p0.vector_, 2521109666u);
			return BT_SUCCESS;
		}
	};

	class DecoratorLoop_bt_par_test_vector_test_node8 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_par_test_vector_test_node8, DecoratorLoop);
		DecoratorLoop_bt_par_test_vector_test_node8()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 100;
		}
	};

	class Assignment_bt_par_test_vector_test_node14 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_vector_test_node14, Assignment);
		Assignment_bt_par_test_vector_test_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			double opr = 0.03f;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_douleVec") == 2212380943u);
			int opl_index = 2;
			((behaviac::vector<double>&)pAgent->GetVariable<behaviac::vector<double> >(2212380943u))[opl_index] = opr;
			return result;
		}
	};

	class Action_bt_par_test_vector_test_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_vector_test_node9, Action);
		Action_bt_par_test_vector_test_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_douleVec") == 2212380943u);
			TList<vector<double> > method_p0 = &((behaviac::vector<double>&)pAgent->GetVariable<behaviac::vector<double> >(2212380943u));
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_douleVec") == 2212380943u);
			int method_p1_index = 2;
			((behaviac::Agent*)pAgent)->_Execute_Method_<behaviac::METHOD_TYPE_behaviac_Agent_VectorAdd, void, IList&, System::Object& >(method_p0, *(System::Object*)&((behaviac::vector<double>&)pAgent->GetVariable<behaviac::vector<double> >(2212380943u))[method_p1_index]);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_douleVec") == 2212380943u);
			pAgent->SetVariable("c_douleVec", *method_p0.vector_, 2212380943u);
			return BT_SUCCESS;
		}
	};

	class DecoratorLoop_bt_par_test_vector_test_node10 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_par_test_vector_test_node10, DecoratorLoop);
		DecoratorLoop_bt_par_test_vector_test_node10()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 100;
		}
	};

	class Assignment_bt_par_test_vector_test_node15 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_par_test_vector_test_node15, Assignment);
		Assignment_bt_par_test_vector_test_node15()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			double opr = 0.05f;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_doubleVal") == 1155710363u);
			pAgent->SetVariable("c_doubleVal", opr, 1155710363u);
			return result;
		}
	};

	class Action_bt_par_test_vector_test_node11 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_par_test_vector_test_node11, Action);
		Action_bt_par_test_vector_test_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_doubleVec2") == 3835017610u);
			TList<vector<double> > method_p0 = &((behaviac::vector<double>&)pAgent->GetVariable<behaviac::vector<double> >(3835017610u));
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_doubleVal") == 1155710363u);
			double& method_p1 = (double&)pAgent->GetVariable<double >(1155710363u);
			((behaviac::Agent*)pAgent)->_Execute_Method_<behaviac::METHOD_TYPE_behaviac_Agent_VectorAdd, void, IList&, System::Object& >(method_p0, *(System::Object*)&method_p1);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_doubleVec2") == 3835017610u);
			pAgent->SetVariable("c_doubleVec2", *method_p0.vector_, 3835017610u);
			return BT_SUCCESS;
		}
	};

		bool bt_par_test_vector_test::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("par_test/vector_test");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
			// pars
			pBT->AddPar("TestNS::AgentArrayAccessTest", "int", "l_index", "0");
			pBT->AddPar("TestNS::AgentArrayAccessTest", "vector<int>", "l_ListInts", "5:100|200|300|400|500");
			pBT->AddPar("TestNS::AgentArrayAccessTest", "int", "l_Int", "0");
			// children
			{
				Sequence* node22 = BEHAVIAC_NEW Sequence;
				node22->SetClassNameString("Sequence");
				node22->SetId(22);
#if !BEHAVIAC_RELEASE
				node22->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
				pBT->AddChild(node22);
				{
					Assignment_bt_par_test_vector_test_node0* node0 = BEHAVIAC_NEW Assignment_bt_par_test_vector_test_node0;
					node0->SetClassNameString("Assignment");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node0);
					node22->SetHasEvents(node22->HasEvents() | node0->HasEvents());
				}
				{
					Assignment_bt_par_test_vector_test_node1* node1 = BEHAVIAC_NEW Assignment_bt_par_test_vector_test_node1;
					node1->SetClassNameString("Assignment");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node1);
					node22->SetHasEvents(node22->HasEvents() | node1->HasEvents());
				}
				{
					Assignment_bt_par_test_vector_test_node16* node16 = BEHAVIAC_NEW Assignment_bt_par_test_vector_test_node16;
					node16->SetClassNameString("Assignment");
					node16->SetId(16);
#if !BEHAVIAC_RELEASE
					node16->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node16);
					node22->SetHasEvents(node22->HasEvents() | node16->HasEvents());
				}
				{
					Assignment_bt_par_test_vector_test_node2* node2 = BEHAVIAC_NEW Assignment_bt_par_test_vector_test_node2;
					node2->SetClassNameString("Assignment");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node2);
					node22->SetHasEvents(node22->HasEvents() | node2->HasEvents());
				}
				{
					Assignment_bt_par_test_vector_test_node4* node4 = BEHAVIAC_NEW Assignment_bt_par_test_vector_test_node4;
					node4->SetClassNameString("Assignment");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node4);
					node22->SetHasEvents(node22->HasEvents() | node4->HasEvents());
				}
				{
					Compute_bt_par_test_vector_test_node3* node3 = BEHAVIAC_NEW Compute_bt_par_test_vector_test_node3;
					node3->SetClassNameString("Compute");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node3);
					node22->SetHasEvents(node22->HasEvents() | node3->HasEvents());
				}
				{
					Assignment_bt_par_test_vector_test_node5* node5 = BEHAVIAC_NEW Assignment_bt_par_test_vector_test_node5;
					node5->SetClassNameString("Assignment");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node5);
					node22->SetHasEvents(node22->HasEvents() | node5->HasEvents());
				}
				{
					Action_bt_par_test_vector_test_node6* node6 = BEHAVIAC_NEW Action_bt_par_test_vector_test_node6;
					node6->SetClassNameString("Action");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node6);
					node22->SetHasEvents(node22->HasEvents() | node6->HasEvents());
				}
				{
					Action_bt_par_test_vector_test_node7* node7 = BEHAVIAC_NEW Action_bt_par_test_vector_test_node7;
					node7->SetClassNameString("Action");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node7);
					node22->SetHasEvents(node22->HasEvents() | node7->HasEvents());
				}
				{
					DecoratorLoop_bt_par_test_vector_test_node8* node8 = BEHAVIAC_NEW DecoratorLoop_bt_par_test_vector_test_node8;
					node8->SetClassNameString("DecoratorLoop");
					node8->SetId(8);
#if !BEHAVIAC_RELEASE
					node8->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node8);
					{
						Sequence* node12 = BEHAVIAC_NEW Sequence;
						node12->SetClassNameString("Sequence");
						node12->SetId(12);
#if !BEHAVIAC_RELEASE
						node12->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
						node8->AddChild(node12);
						{
							Assignment_bt_par_test_vector_test_node14* node14 = BEHAVIAC_NEW Assignment_bt_par_test_vector_test_node14;
							node14->SetClassNameString("Assignment");
							node14->SetId(14);
#if !BEHAVIAC_RELEASE
							node14->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
							node12->AddChild(node14);
							node12->SetHasEvents(node12->HasEvents() | node14->HasEvents());
						}
						{
							Action_bt_par_test_vector_test_node9* node9 = BEHAVIAC_NEW Action_bt_par_test_vector_test_node9;
							node9->SetClassNameString("Action");
							node9->SetId(9);
#if !BEHAVIAC_RELEASE
							node9->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
							node12->AddChild(node9);
							node12->SetHasEvents(node12->HasEvents() | node9->HasEvents());
						}
						node8->SetHasEvents(node8->HasEvents() | node12->HasEvents());
					}
					node22->SetHasEvents(node22->HasEvents() | node8->HasEvents());
				}
				{
					DecoratorLoop_bt_par_test_vector_test_node10* node10 = BEHAVIAC_NEW DecoratorLoop_bt_par_test_vector_test_node10;
					node10->SetClassNameString("DecoratorLoop");
					node10->SetId(10);
#if !BEHAVIAC_RELEASE
					node10->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
					node22->AddChild(node10);
					{
						Sequence* node13 = BEHAVIAC_NEW Sequence;
						node13->SetClassNameString("Sequence");
						node13->SetId(13);
#if !BEHAVIAC_RELEASE
						node13->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
						node10->AddChild(node13);
						{
							Assignment_bt_par_test_vector_test_node15* node15 = BEHAVIAC_NEW Assignment_bt_par_test_vector_test_node15;
							node15->SetClassNameString("Assignment");
							node15->SetId(15);
#if !BEHAVIAC_RELEASE
							node15->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
							node13->AddChild(node15);
							node13->SetHasEvents(node13->HasEvents() | node15->HasEvents());
						}
						{
							Action_bt_par_test_vector_test_node11* node11 = BEHAVIAC_NEW Action_bt_par_test_vector_test_node11;
							node11->SetClassNameString("Action");
							node11->SetId(11);
#if !BEHAVIAC_RELEASE
							node11->SetAgentType("TestNS::AgentArrayAccessTest");
#endif
							node13->AddChild(node11);
							node13->SetHasEvents(node13->HasEvents() | node11->HasEvents());
						}
						node10->SetHasEvents(node10->HasEvents() | node13->HasEvents());
					}
					node22->SetHasEvents(node22->HasEvents() | node10->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node22->HasEvents());
			}
			return true;
		}

}
