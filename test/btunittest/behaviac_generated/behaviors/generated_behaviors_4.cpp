#include "generated_behaviors_4.h"

namespace behaviac
{
	// Source file: node_test/enter_exit_action_ut_2

	class Parallel_bt_node_test_enter_exit_action_ut_2_node0 : public Parallel
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Parallel_bt_node_test_enter_exit_action_ut_2_node0, Parallel);
		Parallel_bt_node_test_enter_exit_action_ut_2_node0()
		{
			m_failPolicy = FAIL_ON_ONE;
			m_succeedPolicy = SUCCEED_ON_ALL;
			m_exitPolicy = EXIT_ABORT_RUNNINGSIBLINGS;
			m_childFinishPolicy = CHILDFINISH_LOOP;
		}
	protected:
	};

	class Precondition_bt_node_test_enter_exit_action_ut_2_attach1 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_enter_exit_action_ut_2_attach1, Precondition);
		Precondition_bt_node_test_enter_exit_action_ut_2_attach1()
		{
			opl_p0 = 0;
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_enter_action_1, bool, float >(opl_p0);
			bool opr2 = true;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
		float opl_p0;
	};

	class Effector_bt_node_test_enter_exit_action_ut_2_attach2 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_enter_exit_action_ut_2_attach2, Effector);
		Effector_bt_node_test_enter_exit_action_ut_2_attach2()
		{
			opl_p0 = 0;
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_exit_action_1, void, float >(opl_p0);
			return result;
		}
		float opl_p0;
	};

	class Precondition_bt_node_test_enter_exit_action_ut_2_attach4 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_enter_exit_action_ut_2_attach4, Precondition);
		Precondition_bt_node_test_enter_exit_action_ut_2_attach4()
		{
			opl_p0 = 3;
			opl_p1 = (char*)("hello");
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_enter_action_2, bool, int, behaviac::string >(opl_p0, opl_p1);
			bool opr2 = true;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
		int opl_p0;
		behaviac::string opl_p1;
	};

	class Effector_bt_node_test_enter_exit_action_ut_2_attach5 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_enter_exit_action_ut_2_attach5, Effector);
		Effector_bt_node_test_enter_exit_action_ut_2_attach5()
		{
			opl_p0 = 5;
			opl_p1 = (char*)("world");
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_exit_action_2, void, int, behaviac::string >(opl_p0, opl_p1);
			return result;
		}
		int opl_p0;
		behaviac::string opl_p1;
	};

	class Condition_bt_node_test_enter_exit_action_ut_2_node8 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_enter_exit_action_ut_2_node8, Condition);
		Condition_bt_node_test_enter_exit_action_ut_2_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_enter_exit_action_ut_2_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_enter_exit_action_ut_2_node9, Action);
		Action_bt_node_test_enter_exit_action_ut_2_node9()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_3, void, float >(method_p0);
			return BT_SUCCESS;
		}
		float method_p0;
	};

	class Precondition_bt_node_test_enter_exit_action_ut_2_attach6 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_enter_exit_action_ut_2_attach6, Precondition);
		Precondition_bt_node_test_enter_exit_action_ut_2_attach6()
		{
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_enter_action_0, bool >();
			bool opr2 = true;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
	};

	class Effector_bt_node_test_enter_exit_action_ut_2_attach7 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_enter_exit_action_ut_2_attach7, Effector);
		Effector_bt_node_test_enter_exit_action_ut_2_attach7()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_exit_action_0, void >();
			return result;
		}
	};

		bool bt_node_test_enter_exit_action_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/enter_exit_action_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Parallel_bt_node_test_enter_exit_action_ut_2_node0* node0 = BEHAVIAC_NEW Parallel_bt_node_test_enter_exit_action_ut_2_node0;
				node0->SetClassNameString("Parallel");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				// attachments
				{
					Precondition_bt_node_test_enter_exit_action_ut_2_attach1* attach1 = BEHAVIAC_NEW Precondition_bt_node_test_enter_exit_action_ut_2_attach1;
					attach1->SetClassNameString("Precondition");
					attach1->SetId(1);
#if !BEHAVIAC_RELEASE
					attach1->SetAgentType("AgentNodeTest");
#endif
					node0->Attach(attach1, true, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach1) != 0));
				}
				{
					Effector_bt_node_test_enter_exit_action_ut_2_attach2* attach2 = BEHAVIAC_NEW Effector_bt_node_test_enter_exit_action_ut_2_attach2;
					attach2->SetClassNameString("Effector");
					attach2->SetId(2);
#if !BEHAVIAC_RELEASE
					attach2->SetAgentType("AgentNodeTest");
#endif
					node0->Attach(attach2, false, true, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach2) != 0));
				}
				pBT->AddChild(node0);
				{
					WaitforSignal* node3 = BEHAVIAC_NEW WaitforSignal;
					node3->SetClassNameString("WaitforSignal");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					// attachments
					{
						Precondition_bt_node_test_enter_exit_action_ut_2_attach4* attach4 = BEHAVIAC_NEW Precondition_bt_node_test_enter_exit_action_ut_2_attach4;
						attach4->SetClassNameString("Precondition");
						attach4->SetId(4);
#if !BEHAVIAC_RELEASE
						attach4->SetAgentType("AgentNodeTest");
#endif
						node3->Attach(attach4, true, false, false);
						node3->SetHasEvents(node3->HasEvents() | (Event::DynamicCast(attach4) != 0));
					}
					{
						Effector_bt_node_test_enter_exit_action_ut_2_attach5* attach5 = BEHAVIAC_NEW Effector_bt_node_test_enter_exit_action_ut_2_attach5;
						attach5->SetClassNameString("Effector");
						attach5->SetId(5);
#if !BEHAVIAC_RELEASE
						attach5->SetAgentType("AgentNodeTest");
#endif
						node3->Attach(attach5, false, true, false);
						node3->SetHasEvents(node3->HasEvents() | (Event::DynamicCast(attach5) != 0));
					}
					node0->AddChild(node3);
					{
						Condition_bt_node_test_enter_exit_action_ut_2_node8* node8 = BEHAVIAC_NEW Condition_bt_node_test_enter_exit_action_ut_2_node8;
						node8->SetClassNameString("Condition");
						node8->SetId(8);
#if !BEHAVIAC_RELEASE
						node8->SetAgentType("AgentNodeTest");
#endif
						node3->SetCustomCondition(node8);
						node3->SetHasEvents(node3->HasEvents() | node8->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					Action_bt_node_test_enter_exit_action_ut_2_node9* node9 = BEHAVIAC_NEW Action_bt_node_test_enter_exit_action_ut_2_node9;
					node9->SetClassNameString("Action");
					node9->SetId(9);
#if !BEHAVIAC_RELEASE
					node9->SetAgentType("AgentNodeTest");
#endif
					// attachments
					{
						Precondition_bt_node_test_enter_exit_action_ut_2_attach6* attach6 = BEHAVIAC_NEW Precondition_bt_node_test_enter_exit_action_ut_2_attach6;
						attach6->SetClassNameString("Precondition");
						attach6->SetId(6);
#if !BEHAVIAC_RELEASE
						attach6->SetAgentType("AgentNodeTest");
#endif
						node9->Attach(attach6, true, false, false);
						node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach6) != 0));
					}
					{
						Effector_bt_node_test_enter_exit_action_ut_2_attach7* attach7 = BEHAVIAC_NEW Effector_bt_node_test_enter_exit_action_ut_2_attach7;
						attach7->SetClassNameString("Effector");
						attach7->SetId(7);
#if !BEHAVIAC_RELEASE
						attach7->SetAgentType("AgentNodeTest");
#endif
						node9->Attach(attach7, false, true, false);
						node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach7) != 0));
					}
					node0->AddChild(node9);
					node0->SetHasEvents(node0->HasEvents() | node9->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/event_subtree_0

	class Task_bt_node_test_event_subtree_0_node6 : public Task
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Task_bt_node_test_event_subtree_0_node6, Task);
		Task_bt_node_test_event_subtree_0_node6()
		{
			this->m_task = (CTaskMethod*)Action::LoadMethod("Self.AgentNodeTest::event_test_void()");
			BEHAVIAC_ASSERT(this->m_task != NULL);
			this->m_bHTN = false;
		}
	protected:
	};

	class Action_bt_node_test_event_subtree_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_subtree_0_node2, Action);
		Action_bt_node_test_event_subtree_0_node2()
		{
			method_p0 = true;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setEventVarBool, void, bool >(method_p0);
			return BT_SUCCESS;
		}
		bool method_p0;
	};

	class Wait_bt_node_test_event_subtree_0_node3 : public Wait
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Wait_bt_node_test_event_subtree_0_node3, Wait);
		Wait_bt_node_test_event_subtree_0_node3()
		{
		}
	protected:
		virtual double GetTime(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 5000;
		}
	};

		bool bt_node_test_event_subtree_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/event_subtree_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Task_bt_node_test_event_subtree_0_node6* node6 = BEHAVIAC_NEW Task_bt_node_test_event_subtree_0_node6;
				node6->SetClassNameString("Task");
				node6->SetId(6);
#if !BEHAVIAC_RELEASE
				node6->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node6);
				{
					Sequence* node0 = BEHAVIAC_NEW Sequence;
					node0->SetClassNameString("Sequence");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node6->AddChild(node0);
					{
						True* node1 = BEHAVIAC_NEW True;
						node1->SetClassNameString("True");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node1);
						node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
					}
					{
						Action_bt_node_test_event_subtree_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_event_subtree_0_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node2);
						node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
					}
					{
						Wait_bt_node_test_event_subtree_0_node3* node3 = BEHAVIAC_NEW Wait_bt_node_test_event_subtree_0_node3;
						node3->SetClassNameString("Wait");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node3);
						node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
					}
					node6->SetHasEvents(node6->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node6->HasEvents());
			}
			return true;
		}

	// Source file: node_test/event_subtree_1

	class Task_bt_node_test_event_subtree_1_node6 : public Task
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Task_bt_node_test_event_subtree_1_node6, Task);
		Task_bt_node_test_event_subtree_1_node6()
		{
			this->m_task = (CTaskMethod*)Action::LoadMethod("Self.AgentNodeTest::event_test_int(0)");
			BEHAVIAC_ASSERT(this->m_task != NULL);
			this->m_bHTN = false;
		}
	protected:
	};

	class Action_bt_node_test_event_subtree_1_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_subtree_1_node2, Action);
		Action_bt_node_test_event_subtree_1_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("_$local_task_param_$_0") == 2009726548u);
			int& method_p0 = (int&)pAgent->GetVariable<int >(2009726548u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setEventVarInt, void, int >(method_p0);
			return BT_SUCCESS;
		}
	};

		bool bt_node_test_event_subtree_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/event_subtree_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "int", "_$local_task_param_$_0", "0");
			// children
			{
				Task_bt_node_test_event_subtree_1_node6* node6 = BEHAVIAC_NEW Task_bt_node_test_event_subtree_1_node6;
				node6->SetClassNameString("Task");
				node6->SetId(6);
#if !BEHAVIAC_RELEASE
				node6->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node6);
				{
					Sequence* node0 = BEHAVIAC_NEW Sequence;
					node0->SetClassNameString("Sequence");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node6->AddChild(node0);
					{
						True* node1 = BEHAVIAC_NEW True;
						node1->SetClassNameString("True");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node1);
						node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
					}
					{
						Action_bt_node_test_event_subtree_1_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_event_subtree_1_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node2);
						node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
					}
					node6->SetHasEvents(node6->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node6->HasEvents());
			}
			return true;
		}

	// Source file: node_test/event_subtree_2

	class Task_bt_node_test_event_subtree_2_node6 : public Task
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Task_bt_node_test_event_subtree_2_node6, Task);
		Task_bt_node_test_event_subtree_2_node6()
		{
			this->m_task = (CTaskMethod*)Action::LoadMethod("Self.AgentNodeTest::event_test_int_bool(0,false)");
			BEHAVIAC_ASSERT(this->m_task != NULL);
			this->m_bHTN = false;
		}
	protected:
	};

	class Action_bt_node_test_event_subtree_2_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_subtree_2_node1, Action);
		Action_bt_node_test_event_subtree_2_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("_$local_task_param_$_0") == 2009726548u);
			int& method_p0 = (int&)pAgent->GetVariable<int >(2009726548u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setEventVarInt, void, int >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Action_bt_node_test_event_subtree_2_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_subtree_2_node2, Action);
		Action_bt_node_test_event_subtree_2_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("_$local_task_param_$_1") == 1859309333u);
			bool& method_p0 = (bool&)pAgent->GetVariable<bool >(1859309333u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setEventVarBool, void, bool >(method_p0);
			return BT_SUCCESS;
		}
	};

		bool bt_node_test_event_subtree_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/event_subtree_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "int", "_$local_task_param_$_0", "0");
			pBT->AddPar("AgentNodeTest", "bool", "_$local_task_param_$_1", "false");
			// children
			{
				Task_bt_node_test_event_subtree_2_node6* node6 = BEHAVIAC_NEW Task_bt_node_test_event_subtree_2_node6;
				node6->SetClassNameString("Task");
				node6->SetId(6);
#if !BEHAVIAC_RELEASE
				node6->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node6);
				{
					Sequence* node0 = BEHAVIAC_NEW Sequence;
					node0->SetClassNameString("Sequence");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node6->AddChild(node0);
					{
						Action_bt_node_test_event_subtree_2_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_event_subtree_2_node1;
						node1->SetClassNameString("Action");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node1);
						node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
					}
					{
						Action_bt_node_test_event_subtree_2_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_event_subtree_2_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node2);
						node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
					}
					node6->SetHasEvents(node6->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node6->HasEvents());
			}
			return true;
		}

	// Source file: node_test/event_subtree_3

	class Task_bt_node_test_event_subtree_3_node7 : public Task
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Task_bt_node_test_event_subtree_3_node7, Task);
		Task_bt_node_test_event_subtree_3_node7()
		{
			this->m_task = (CTaskMethod*)Action::LoadMethod("Self.AgentNodeTest::event_test_int_bool_float(0,false,0)");
			BEHAVIAC_ASSERT(this->m_task != NULL);
			this->m_bHTN = false;
		}
	protected:
	};

	class Action_bt_node_test_event_subtree_3_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_subtree_3_node1, Action);
		Action_bt_node_test_event_subtree_3_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("_$local_task_param_$_0") == 2009726548u);
			int& method_p0 = (int&)pAgent->GetVariable<int >(2009726548u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setEventVarInt, void, int >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Action_bt_node_test_event_subtree_3_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_subtree_3_node2, Action);
		Action_bt_node_test_event_subtree_3_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("_$local_task_param_$_1") == 1859309333u);
			bool& method_p0 = (bool&)pAgent->GetVariable<bool >(1859309333u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setEventVarBool, void, bool >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Action_bt_node_test_event_subtree_3_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_subtree_3_node4, Action);
		Action_bt_node_test_event_subtree_3_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("_$local_task_param_$_2") == 1174379734u);
			float& method_p0 = (float&)pAgent->GetVariable<float >(1174379734u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setEventVarFloat, void, float >(method_p0);
			return BT_SUCCESS;
		}
	};

		bool bt_node_test_event_subtree_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/event_subtree_3");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "int", "_$local_task_param_$_0", "0");
			pBT->AddPar("AgentNodeTest", "bool", "_$local_task_param_$_1", "false");
			pBT->AddPar("AgentNodeTest", "float", "_$local_task_param_$_2", "0");
			// children
			{
				Task_bt_node_test_event_subtree_3_node7* node7 = BEHAVIAC_NEW Task_bt_node_test_event_subtree_3_node7;
				node7->SetClassNameString("Task");
				node7->SetId(7);
#if !BEHAVIAC_RELEASE
				node7->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node7);
				{
					Sequence* node0 = BEHAVIAC_NEW Sequence;
					node0->SetClassNameString("Sequence");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node7->AddChild(node0);
					{
						Action_bt_node_test_event_subtree_3_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_event_subtree_3_node1;
						node1->SetClassNameString("Action");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node1);
						node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
					}
					{
						Action_bt_node_test_event_subtree_3_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_event_subtree_3_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node2);
						node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
					}
					{
						Action_bt_node_test_event_subtree_3_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_event_subtree_3_node4;
						node4->SetClassNameString("Action");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node4);
						node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
					}
					node7->SetHasEvents(node7->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node7->HasEvents());
			}
			return true;
		}

	// Source file: node_test/event_subtree_4

	class Task_bt_node_test_event_subtree_4_node0 : public Task
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Task_bt_node_test_event_subtree_4_node0, Task);
		Task_bt_node_test_event_subtree_4_node0()
		{
			this->m_task = (CTaskMethod*)Action::LoadMethod("Self.AgentNodeTest::event_test_agent(null)");
			BEHAVIAC_ASSERT(this->m_task != NULL);
			this->m_bHTN = false;
		}
	protected:
	};

	class Action_bt_node_test_event_subtree_4_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_subtree_4_node2, Action);
		Action_bt_node_test_event_subtree_4_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("_$local_task_param_$_0") == 2009726548u);
			AgentNodeTest*& method_p0 = (AgentNodeTest*&)pAgent->GetVariable<AgentNodeTest* >(2009726548u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setEventVarAgent, void, AgentNodeTest* >(method_p0);
			return BT_SUCCESS;
		}
	};

		bool bt_node_test_event_subtree_4::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/event_subtree_4");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "AgentNodeTest", "_$local_task_param_$_0", "null");
			// children
			{
				Task_bt_node_test_event_subtree_4_node0* node0 = BEHAVIAC_NEW Task_bt_node_test_event_subtree_4_node0;
				node0->SetClassNameString("Task");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Sequence* node1 = BEHAVIAC_NEW Sequence;
					node1->SetClassNameString("Sequence");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						Action_bt_node_test_event_subtree_4_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_event_subtree_4_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node2);
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/event_ut_0

	class Event_bt_node_test_event_ut_0_attach1 : public Event
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Event_bt_node_test_event_ut_0_attach1, Event);
		Event_bt_node_test_event_ut_0_attach1()
		{
		}
	public:
		void Initialize(const char* eventName, const char* referencedBehavior, TriggerMode mode, bool once)
		{
			this->m_event = Action::LoadMethod(eventName);
			this->m_referencedBehaviorPath = referencedBehavior;
			this->m_triggerMode = mode;
			this->m_bTriggeredOnce = once;
		}
	};

	class Event_bt_node_test_event_ut_0_attach2 : public Event
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Event_bt_node_test_event_ut_0_attach2, Event);
		Event_bt_node_test_event_ut_0_attach2()
		{
		}
	public:
		void Initialize(const char* eventName, const char* referencedBehavior, TriggerMode mode, bool once)
		{
			this->m_event = Action::LoadMethod(eventName);
			this->m_referencedBehaviorPath = referencedBehavior;
			this->m_triggerMode = mode;
			this->m_bTriggeredOnce = once;
		}
	};

	class Event_bt_node_test_event_ut_0_attach3 : public Event
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Event_bt_node_test_event_ut_0_attach3, Event);
		Event_bt_node_test_event_ut_0_attach3()
		{
		}
	public:
		void Initialize(const char* eventName, const char* referencedBehavior, TriggerMode mode, bool once)
		{
			this->m_event = Action::LoadMethod(eventName);
			this->m_referencedBehaviorPath = referencedBehavior;
			this->m_triggerMode = mode;
			this->m_bTriggeredOnce = once;
		}
	};

	class Event_bt_node_test_event_ut_0_attach4 : public Event
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Event_bt_node_test_event_ut_0_attach4, Event);
		Event_bt_node_test_event_ut_0_attach4()
		{
		}
	public:
		void Initialize(const char* eventName, const char* referencedBehavior, TriggerMode mode, bool once)
		{
			this->m_event = Action::LoadMethod(eventName);
			this->m_referencedBehaviorPath = referencedBehavior;
			this->m_triggerMode = mode;
			this->m_bTriggeredOnce = once;
		}
	};

	class Event_bt_node_test_event_ut_0_attach8 : public Event
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Event_bt_node_test_event_ut_0_attach8, Event);
		Event_bt_node_test_event_ut_0_attach8()
		{
		}
	public:
		void Initialize(const char* eventName, const char* referencedBehavior, TriggerMode mode, bool once)
		{
			this->m_event = Action::LoadMethod(eventName);
			this->m_referencedBehaviorPath = referencedBehavior;
			this->m_triggerMode = mode;
			this->m_bTriggeredOnce = once;
		}
	};

	class Condition_bt_node_test_event_ut_0_node6 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_event_ut_0_node6, Condition);
		Condition_bt_node_test_event_ut_0_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_event_ut_0_node7 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_ut_0_node7, Action);
		Action_bt_node_test_event_ut_0_node7()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_event_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/event_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				// attachments
				{
					Event_bt_node_test_event_ut_0_attach1* attach1 = BEHAVIAC_NEW Event_bt_node_test_event_ut_0_attach1;
					attach1->SetClassNameString("Event");
					attach1->SetId(1);
#if !BEHAVIAC_RELEASE
					attach1->SetAgentType("AgentNodeTest");
#endif
					attach1->Initialize("Self.AgentNodeTest::event_test_void()", "node_test/event_subtree_0", TM_Return, false);
					node0->Attach(attach1, false, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach1) != 0));
				}
				{
					Event_bt_node_test_event_ut_0_attach2* attach2 = BEHAVIAC_NEW Event_bt_node_test_event_ut_0_attach2;
					attach2->SetClassNameString("Event");
					attach2->SetId(2);
#if !BEHAVIAC_RELEASE
					attach2->SetAgentType("AgentNodeTest");
#endif
					attach2->Initialize("Self.AgentNodeTest::event_test_int(0)", "node_test/event_subtree_1", TM_Return, false);
					node0->Attach(attach2, false, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach2) != 0));
				}
				{
					Event_bt_node_test_event_ut_0_attach3* attach3 = BEHAVIAC_NEW Event_bt_node_test_event_ut_0_attach3;
					attach3->SetClassNameString("Event");
					attach3->SetId(3);
#if !BEHAVIAC_RELEASE
					attach3->SetAgentType("AgentNodeTest");
#endif
					attach3->Initialize("Self.AgentNodeTest::event_test_int_bool(0,false)", "node_test/event_subtree_2", TM_Return, false);
					node0->Attach(attach3, false, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach3) != 0));
				}
				{
					Event_bt_node_test_event_ut_0_attach4* attach4 = BEHAVIAC_NEW Event_bt_node_test_event_ut_0_attach4;
					attach4->SetClassNameString("Event");
					attach4->SetId(4);
#if !BEHAVIAC_RELEASE
					attach4->SetAgentType("AgentNodeTest");
#endif
					attach4->Initialize("Self.AgentNodeTest::event_test_int_bool_float(0,false,0)", "node_test/event_subtree_3", TM_Return, false);
					node0->Attach(attach4, false, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach4) != 0));
				}
				{
					Event_bt_node_test_event_ut_0_attach8* attach8 = BEHAVIAC_NEW Event_bt_node_test_event_ut_0_attach8;
					attach8->SetClassNameString("Event");
					attach8->SetId(8);
#if !BEHAVIAC_RELEASE
					attach8->SetAgentType("AgentNodeTest");
#endif
					attach8->Initialize("Self.AgentNodeTest::event_test_agent(null)", "node_test/event_subtree_4", TM_Transfer, false);
					node0->Attach(attach8, false, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach8) != 0));
				}
				pBT->AddChild(node0);
				{
					WaitforSignal* node5 = BEHAVIAC_NEW WaitforSignal;
					node5->SetClassNameString("WaitforSignal");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					{
						Condition_bt_node_test_event_ut_0_node6* node6 = BEHAVIAC_NEW Condition_bt_node_test_event_ut_0_node6;
						node6->SetClassNameString("Condition");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("AgentNodeTest");
#endif
						node5->SetCustomCondition(node6);
						node5->SetHasEvents(node5->HasEvents() | node6->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Action_bt_node_test_event_ut_0_node7* node7 = BEHAVIAC_NEW Action_bt_node_test_event_ut_0_node7;
					node7->SetClassNameString("Action");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/event_ut_1

	class ReferencedBehavior_bt_node_test_event_ut_1_node2 : public ReferencedBehavior
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(ReferencedBehavior_bt_node_test_event_ut_1_node2, ReferencedBehavior);
		ReferencedBehavior_bt_node_test_event_ut_1_node2()
		{
			const char* szTreePath = this->GetReferencedTree(0);
			if (szTreePath) {
			BehaviorTree* behaviorTree = Workspace::GetInstance()->LoadBehaviorTree(szTreePath);
			BEHAVIAC_ASSERT(behaviorTree);
			if (behaviorTree)
			{
				this->m_bHasEvents |= behaviorTree->HasEvents();
			}
			}
		}
	protected:
		virtual const char* GetReferencedTree(const Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return (char*)("node_test/event_ut_0");
		}
	};

	class Action_bt_node_test_event_ut_1_node7 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_ut_1_node7, Action);
		Action_bt_node_test_event_ut_1_node7()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_event_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/event_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					ReferencedBehavior_bt_node_test_event_ut_1_node2* node2 = BEHAVIAC_NEW ReferencedBehavior_bt_node_test_event_ut_1_node2;
					node2->SetClassNameString("ReferencedBehavior");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_event_ut_1_node7* node7 = BEHAVIAC_NEW Action_bt_node_test_event_ut_1_node7;
					node7->SetClassNameString("Action");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/event_ut_2

	class Event_bt_node_test_event_ut_2_attach1 : public Event
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Event_bt_node_test_event_ut_2_attach1, Event);
		Event_bt_node_test_event_ut_2_attach1()
		{
		}
	public:
		void Initialize(const char* eventName, const char* referencedBehavior, TriggerMode mode, bool once)
		{
			this->m_event = Action::LoadMethod(eventName);
			this->m_referencedBehaviorPath = referencedBehavior;
			this->m_triggerMode = mode;
			this->m_bTriggeredOnce = once;
		}
	};

	class Condition_bt_node_test_event_ut_2_node6 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_event_ut_2_node6, Condition);
		Condition_bt_node_test_event_ut_2_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_event_ut_2_node7 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_event_ut_2_node7, Action);
		Action_bt_node_test_event_ut_2_node7()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_event_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/event_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("ChildNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("ChildNodeTest");
#endif
				// attachments
				{
					Event_bt_node_test_event_ut_2_attach1* attach1 = BEHAVIAC_NEW Event_bt_node_test_event_ut_2_attach1;
					attach1->SetClassNameString("Event");
					attach1->SetId(1);
#if !BEHAVIAC_RELEASE
					attach1->SetAgentType("ChildNodeTest");
#endif
					attach1->Initialize("Self.AgentNodeTest::event_test_int_bool(0,false)", "node_test/event_subtree_2", TM_Transfer, false);
					node0->Attach(attach1, false, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach1) != 0));
				}
				pBT->AddChild(node0);
				{
					WaitforSignal* node5 = BEHAVIAC_NEW WaitforSignal;
					node5->SetClassNameString("WaitforSignal");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("ChildNodeTest");
#endif
					node0->AddChild(node5);
					{
						Condition_bt_node_test_event_ut_2_node6* node6 = BEHAVIAC_NEW Condition_bt_node_test_event_ut_2_node6;
						node6->SetClassNameString("Condition");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("ChildNodeTest");
#endif
						node5->SetCustomCondition(node6);
						node5->SetHasEvents(node5->HasEvents() | node6->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Action_bt_node_test_event_ut_2_node7* node7 = BEHAVIAC_NEW Action_bt_node_test_event_ut_2_node7;
					node7->SetClassNameString("Action");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("ChildNodeTest");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/event_ut_3

	class DecoratorLoop_bt_node_test_event_ut_3_node0 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_event_ut_3_node0, DecoratorLoop);
		DecoratorLoop_bt_node_test_event_ut_3_node0()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return -1;
		}
	};

	class Event_bt_node_test_event_ut_3_attach1 : public Event
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Event_bt_node_test_event_ut_3_attach1, Event);
		Event_bt_node_test_event_ut_3_attach1()
		{
		}
	public:
		void Initialize(const char* eventName, const char* referencedBehavior, TriggerMode mode, bool once)
		{
			this->m_event = Action::LoadMethod(eventName);
			this->m_referencedBehaviorPath = referencedBehavior;
			this->m_triggerMode = mode;
			this->m_bTriggeredOnce = once;
		}
	};

	class ReferencedBehavior_bt_node_test_event_ut_3_node2 : public ReferencedBehavior
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(ReferencedBehavior_bt_node_test_event_ut_3_node2, ReferencedBehavior);
		ReferencedBehavior_bt_node_test_event_ut_3_node2()
		{
			const char* szTreePath = this->GetReferencedTree(0);
			if (szTreePath) {
			BehaviorTree* behaviorTree = Workspace::GetInstance()->LoadBehaviorTree(szTreePath);
			BEHAVIAC_ASSERT(behaviorTree);
			if (behaviorTree)
			{
				this->m_bHasEvents |= behaviorTree->HasEvents();
			}
			}
		}
	protected:
		virtual const char* GetReferencedTree(const Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return (char*)("node_test/if_else_ut_0");
		}
	};

		bool bt_node_test_event_ut_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/event_ut_3");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				DecoratorLoop_bt_node_test_event_ut_3_node0* node0 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_event_ut_3_node0;
				node0->SetClassNameString("DecoratorLoop");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				// attachments
				{
					Event_bt_node_test_event_ut_3_attach1* attach1 = BEHAVIAC_NEW Event_bt_node_test_event_ut_3_attach1;
					attach1->SetClassNameString("Event");
					attach1->SetId(1);
#if !BEHAVIAC_RELEASE
					attach1->SetAgentType("AgentNodeTest");
#endif
					attach1->Initialize("Self.AgentNodeTest::event_test_void()", "node_test/event_subtree_0", TM_Transfer, false);
					node0->Attach(attach1, false, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach1) != 0));
				}
				pBT->AddChild(node0);
				{
					ReferencedBehavior_bt_node_test_event_ut_3_node2* node2 = BEHAVIAC_NEW ReferencedBehavior_bt_node_test_event_ut_3_node2;
					node2->SetClassNameString("ReferencedBehavior");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/frames_ut_0

	class DecoratorFrames_bt_node_test_frames_ut_0_node23 : public DecoratorFrames
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorFrames_bt_node_test_frames_ut_0_node23, DecoratorFrames);
		DecoratorFrames_bt_node_test_frames_ut_0_node23()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetFrames(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 5;
		}
	};

	class Action_bt_node_test_frames_ut_0_node16 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_frames_ut_0_node16, Action);
		Action_bt_node_test_frames_ut_0_node16()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_SelectTarget, void >();
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_frames_ut_0_node21 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_frames_ut_0_node21, Assignment);
		Assignment_bt_node_test_frames_ut_0_node21()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 0;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

	class Action_bt_node_test_frames_ut_0_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_frames_ut_0_node5, Action);
		Action_bt_node_test_frames_ut_0_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_Move, behaviac::EBTStatus >();
			return result;
		}
	};

	class Precondition_bt_node_test_frames_ut_0_attach7 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_frames_ut_0_attach7, Precondition);
		Precondition_bt_node_test_frames_ut_0_attach7()
		{
			this->SetPhase(Precondition::E_UPDATE);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 0;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr2;
			return result;
		}
	};

	class Assignment_bt_node_test_frames_ut_0_node0 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_frames_ut_0_node0, Assignment);
		Assignment_bt_node_test_frames_ut_0_node0()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 2;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

	class Assignment_bt_node_test_frames_ut_0_node2 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_frames_ut_0_node2, Assignment);
		Assignment_bt_node_test_frames_ut_0_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 3;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

		bool bt_node_test_frames_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/frames_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node1 = BEHAVIAC_NEW Sequence;
				node1->SetClassNameString("Sequence");
				node1->SetId(1);
#if !BEHAVIAC_RELEASE
				node1->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node1);
				{
					DecoratorFrames_bt_node_test_frames_ut_0_node23* node23 = BEHAVIAC_NEW DecoratorFrames_bt_node_test_frames_ut_0_node23;
					node23->SetClassNameString("DecoratorFrames");
					node23->SetId(23);
#if !BEHAVIAC_RELEASE
					node23->SetAgentType("AgentNodeTest");
#endif
					node1->AddChild(node23);
					{
						Sequence* node15 = BEHAVIAC_NEW Sequence;
						node15->SetClassNameString("Sequence");
						node15->SetId(15);
#if !BEHAVIAC_RELEASE
						node15->SetAgentType("AgentNodeTest");
#endif
						node23->AddChild(node15);
						{
							Action_bt_node_test_frames_ut_0_node16* node16 = BEHAVIAC_NEW Action_bt_node_test_frames_ut_0_node16;
							node16->SetClassNameString("Action");
							node16->SetId(16);
#if !BEHAVIAC_RELEASE
							node16->SetAgentType("AgentNodeTest");
#endif
							node15->AddChild(node16);
							node15->SetHasEvents(node15->HasEvents() | node16->HasEvents());
						}
						{
							Assignment_bt_node_test_frames_ut_0_node21* node21 = BEHAVIAC_NEW Assignment_bt_node_test_frames_ut_0_node21;
							node21->SetClassNameString("Assignment");
							node21->SetId(21);
#if !BEHAVIAC_RELEASE
							node21->SetAgentType("AgentNodeTest");
#endif
							node15->AddChild(node21);
							node15->SetHasEvents(node15->HasEvents() | node21->HasEvents());
						}
						{
							Action_bt_node_test_frames_ut_0_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_frames_ut_0_node5;
							node5->SetClassNameString("Action");
							node5->SetId(5);
#if !BEHAVIAC_RELEASE
							node5->SetAgentType("AgentNodeTest");
#endif
							// attachments
							{
								Precondition_bt_node_test_frames_ut_0_attach7* attach7 = BEHAVIAC_NEW Precondition_bt_node_test_frames_ut_0_attach7;
								attach7->SetClassNameString("Precondition");
								attach7->SetId(7);
#if !BEHAVIAC_RELEASE
								attach7->SetAgentType("AgentNodeTest");
#endif
								node5->Attach(attach7, true, false, false);
								node5->SetHasEvents(node5->HasEvents() | (Event::DynamicCast(attach7) != 0));
							}
							node15->AddChild(node5);
							node15->SetHasEvents(node15->HasEvents() | node5->HasEvents());
						}
						{
							Assignment_bt_node_test_frames_ut_0_node0* node0 = BEHAVIAC_NEW Assignment_bt_node_test_frames_ut_0_node0;
							node0->SetClassNameString("Assignment");
							node0->SetId(0);
#if !BEHAVIAC_RELEASE
							node0->SetAgentType("AgentNodeTest");
#endif
							node15->AddChild(node0);
							node15->SetHasEvents(node15->HasEvents() | node0->HasEvents());
						}
						node23->SetHasEvents(node23->HasEvents() | node15->HasEvents());
					}
					node1->SetHasEvents(node1->HasEvents() | node23->HasEvents());
				}
				{
					Assignment_bt_node_test_frames_ut_0_node2* node2 = BEHAVIAC_NEW Assignment_bt_node_test_frames_ut_0_node2;
					node2->SetClassNameString("Assignment");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node1->AddChild(node2);
					node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node1->HasEvents());
			}
			return true;
		}

	// Source file: node_test/if_else_ut_0

	class Action_bt_node_test_if_else_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_if_else_ut_0_node2, Action);
		Action_bt_node_test_if_else_ut_0_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_if_else_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_if_else_ut_0_node3, Action);
		Action_bt_node_test_if_else_ut_0_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_if_else_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/if_else_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				IfElse* node0 = BEHAVIAC_NEW IfElse;
				node0->SetClassNameString("IfElse");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					True* node1 = BEHAVIAC_NEW True;
					node1->SetClassNameString("True");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_if_else_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_if_else_ut_0_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_if_else_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_if_else_ut_0_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/if_else_ut_1

	class Action_bt_node_test_if_else_ut_1_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_if_else_ut_1_node2, Action);
		Action_bt_node_test_if_else_ut_1_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_if_else_ut_1_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_if_else_ut_1_node3, Action);
		Action_bt_node_test_if_else_ut_1_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_if_else_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/if_else_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				IfElse* node0 = BEHAVIAC_NEW IfElse;
				node0->SetClassNameString("IfElse");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					False* node1 = BEHAVIAC_NEW False;
					node1->SetClassNameString("False");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_if_else_ut_1_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_if_else_ut_1_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_if_else_ut_1_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_if_else_ut_1_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/parallel_ut_0

	class Parallel_bt_node_test_parallel_ut_0_node0 : public Parallel
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Parallel_bt_node_test_parallel_ut_0_node0, Parallel);
		Parallel_bt_node_test_parallel_ut_0_node0()
		{
			m_failPolicy = FAIL_ON_ONE;
			m_succeedPolicy = SUCCEED_ON_ALL;
			m_exitPolicy = EXIT_ABORT_RUNNINGSIBLINGS;
			m_childFinishPolicy = CHILDFINISH_LOOP;
		}
	protected:
	};

	class Action_bt_node_test_parallel_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_parallel_ut_0_node3, Action);
		Action_bt_node_test_parallel_ut_0_node3()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_parallel_ut_0_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_parallel_ut_0_node4, Action);
		Action_bt_node_test_parallel_ut_0_node4()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_parallel_ut_0_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_parallel_ut_0_node5, Action);
		Action_bt_node_test_parallel_ut_0_node5()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_parallel_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_parallel_ut_0_node2, Action);
		Action_bt_node_test_parallel_ut_0_node2()
		{
			method_p0 = 3;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_parallel_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/parallel_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node1 = BEHAVIAC_NEW Sequence;
				node1->SetClassNameString("Sequence");
				node1->SetId(1);
#if !BEHAVIAC_RELEASE
				node1->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node1);
				{
					Parallel_bt_node_test_parallel_ut_0_node0* node0 = BEHAVIAC_NEW Parallel_bt_node_test_parallel_ut_0_node0;
					node0->SetClassNameString("Parallel");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node1->AddChild(node0);
					{
						Action_bt_node_test_parallel_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_parallel_ut_0_node3;
						node3->SetClassNameString("Action");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node3);
						node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
					}
					{
						Action_bt_node_test_parallel_ut_0_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_parallel_ut_0_node4;
						node4->SetClassNameString("Action");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node4);
						node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
					}
					{
						Action_bt_node_test_parallel_ut_0_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_parallel_ut_0_node5;
						node5->SetClassNameString("Action");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node5);
						node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
					}
					node1->SetHasEvents(node1->HasEvents() | node0->HasEvents());
				}
				{
					Action_bt_node_test_parallel_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_parallel_ut_0_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node1->AddChild(node2);
					node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node1->HasEvents());
			}
			return true;
		}

}
