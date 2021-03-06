/** Generated by YAKINDU Statechart Tools code generator. */
// Gabriel Minolla

#include "State_Diagramm.h"

/*! \file Implementation of the state machine 'State_Diagramm'
*/




State_Diagramm::State_Diagramm()  :
stateConfVectorPosition(0),
iface(sc_null),
ifaceInternalSCI(sc_null)
{
	this->iface.parent = this;
	this->ifaceInternalSCI.parent = this;
}

State_Diagramm::~State_Diagramm()
{
}


using namespace state_diagramm_events;

SctEvent* State_Diagramm::getNextEvent()
{
	SctEvent* nextEvent = 0;
	
	if(!internalEventQueue.empty()) {
		nextEvent = internalEventQueue.front();
		internalEventQueue.pop_front();
	}
	
	return nextEvent;
}

void State_Diagramm::dispatch_event(SctEvent * event)
{
	if(event == 0) {
		return;
	}
	switch(event->name)
	{
		case InternalSCI_S:
		case InternalSCI_S_0:
		case InternalSCI_k:
		case InternalSCI_k_0:
		case InternalSCI_Extrd:
		case InternalSCI_Extrd_0:
		case InternalSCI_Retr:
		case InternalSCI_Retr_0:
		case InternalSCI_Top:
		case InternalSCI_Bottom:
		case InternalSCI_SZ:
		{
			ifaceInternalSCI.dispatch_event(event);
			break;
		}
		default:
			break;
	}
}

void State_Diagramm::DefaultSCI::dispatch_event(SctEvent * event)
{
	switch(event->name)
	{
		default:
			break;
	}
}
void State_Diagramm::InternalSCI::dispatch_event(SctEvent * event)
{
	switch(event->name)
	{
		case InternalSCI_S:
		{
			internal_raise_s();
			break;
		}
		case InternalSCI_S_0:
		{
			internal_raise_s_0();
			break;
		}
		case InternalSCI_k:
		{
			internal_raise_k();
			break;
		}
		case InternalSCI_k_0:
		{
			internal_raise_k_0();
			break;
		}
		case InternalSCI_Extrd:
		{
			internal_raise_extrd();
			break;
		}
		case InternalSCI_Extrd_0:
		{
			internal_raise_extrd_0();
			break;
		}
		case InternalSCI_Retr:
		{
			internal_raise_retr();
			break;
		}
		case InternalSCI_Retr_0:
		{
			internal_raise_retr_0();
			break;
		}
		case InternalSCI_Top:
		{
			internal_raise_top();
			break;
		}
		case InternalSCI_Bottom:
		{
			internal_raise_bottom();
			break;
		}
		case InternalSCI_SZ:
		{
			internal_raise_sZ();
			break;
		}
		default:
			break;
	}
}


void State_Diagramm::init()
{
	for (sc_ushort i = 0; i < maxOrthogonalStates; ++i)
		stateConfVector[i] = State_Diagramm_last_state;
	
	stateConfVectorPosition = 0;
	

	clearInEvents();
	clearOutEvents();
	
}

void State_Diagramm::enter()
{
	/* Default enter sequence for statechart State_Diagramm */
	enseq_main_region_default();
}

void State_Diagramm::exit()
{
	/* Default exit sequence for statechart State_Diagramm */
	exseq_main_region();
}

sc_boolean State_Diagramm::isActive() const
{
	return stateConfVector[0] != State_Diagramm_last_state;
}

/* 
 * Always returns 'false' since this state machine can never become final.
 */
sc_boolean State_Diagramm::isFinal() const
{
   return false;}

void State_Diagramm::runCycle()
{
	clearOutEvents();
					
	SctEvent * currentEvent = getNextEvent();
	
	do
	{
		/* Set event flags as usual */
		dispatch_event(currentEvent);
		
		for (stateConfVectorPosition = 0;
			stateConfVectorPosition < maxOrthogonalStates;
			stateConfVectorPosition++)
			{
				
			switch (stateConfVector[stateConfVectorPosition])
			{
			case main_region_Wait :
			{
				main_region_Wait_react(true);
				break;
			}
			case main_region_Init :
			{
				main_region_Init_react(true);
				break;
			}
			case main_region_Ready :
			{
				main_region_Ready_react(true);
				break;
			}
			case main_region_Retract :
			{
				main_region_Retract_react(true);
				break;
			}
			case main_region_End :
			{
				main_region_End_react(true);
				break;
			}
			case main_region_Extrude :
			{
				main_region_Extrude_react(true);
				break;
			}
			case main_region_Measurement :
			{
				main_region_Measurement_react(true);
				break;
			}
			default:
				break;
			}
		}
		
		/* Delete event from memory */
		delete currentEvent;
		clearInEvents();
	} while((currentEvent = getNextEvent()));
}

void State_Diagramm::clearInEvents()
{
	ifaceInternalSCI.S_raised = false; 
	ifaceInternalSCI.S_0_raised = false; 
	ifaceInternalSCI.k_raised = false; 
	ifaceInternalSCI.k_0_raised = false; 
	ifaceInternalSCI.Extrd_raised = false; 
	ifaceInternalSCI.Extrd_0_raised = false; 
	ifaceInternalSCI.Retr_raised = false; 
	ifaceInternalSCI.Retr_0_raised = false; 
	ifaceInternalSCI.Top_raised = false; 
	ifaceInternalSCI.Bottom_raised = false; 
	ifaceInternalSCI.SZ_raised = false; 
}

void State_Diagramm::clearOutEvents()
{
}


sc_boolean State_Diagramm::isStateActive(State_DiagrammStates state) const
{
	switch (state)
	{
		case main_region_Wait : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_WAIT] == main_region_Wait
			);
		case main_region_Init : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_INIT] == main_region_Init
			);
		case main_region_Ready : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_READY] == main_region_Ready
			);
		case main_region_Retract : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_RETRACT] == main_region_Retract
			);
		case main_region_End : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_END] == main_region_End
			);
		case main_region_Extrude : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_EXTRUDE] == main_region_Extrude
			);
		case main_region_Measurement : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_MEASUREMENT] == main_region_Measurement
			);
		default: return false;
	}
}

State_Diagramm::DefaultSCI* State_Diagramm::getDefaultSCI()
{
	return &iface;
}
/* Functions for event S in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_s()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_S(InternalSCI_S));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_s()
{
	S_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_s() const
{
	return S_raised;
}
/* Functions for event S_0 in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_s_0()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_S_0(InternalSCI_S_0));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_s_0()
{
	S_0_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_s_0() const
{
	return S_0_raised;
}
/* Functions for event k in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_k()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_k(InternalSCI_k));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_k()
{
	k_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_k() const
{
	return k_raised;
}
/* Functions for event k_0 in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_k_0()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_k_0(InternalSCI_k_0));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_k_0()
{
	k_0_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_k_0() const
{
	return k_0_raised;
}
/* Functions for event Extrd in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_extrd()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_Extrd(InternalSCI_Extrd));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_extrd()
{
	Extrd_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_extrd() const
{
	return Extrd_raised;
}
/* Functions for event Extrd_0 in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_extrd_0()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_Extrd_0(InternalSCI_Extrd_0));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_extrd_0()
{
	Extrd_0_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_extrd_0() const
{
	return Extrd_0_raised;
}
/* Functions for event Retr in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_retr()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_Retr(InternalSCI_Retr));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_retr()
{
	Retr_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_retr() const
{
	return Retr_raised;
}
/* Functions for event Retr_0 in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_retr_0()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_Retr_0(InternalSCI_Retr_0));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_retr_0()
{
	Retr_0_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_retr_0() const
{
	return Retr_0_raised;
}
/* Functions for event Top in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_top()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_Top(InternalSCI_Top));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_top()
{
	Top_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_top() const
{
	return Top_raised;
}
/* Functions for event Bottom in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_bottom()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_Bottom(InternalSCI_Bottom));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_bottom()
{
	Bottom_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_bottom() const
{
	return Bottom_raised;
}
/* Functions for event SZ in interface InternalSCI */
void State_Diagramm::InternalSCI::raise_sZ()
{
	parent->internalEventQueue.push_back(new SctEvent_InternalSCI_SZ(InternalSCI_SZ));
	parent->runCycle();
}
void State_Diagramm::InternalSCI::internal_raise_sZ()
{
	SZ_raised = true;
}
sc_boolean State_Diagramm::InternalSCI::isRaised_sZ() const
{
	return SZ_raised;
}

// implementations of all internal functions

sc_boolean State_Diagramm::check_main_region__choice_0_tr0_tr0()
{
	return ifaceInternalSCI.k_raised;
}

void State_Diagramm::effect_main_region__choice_0_tr0()
{
	enseq_main_region_Measurement_default();
}

void State_Diagramm::effect_main_region__choice_0_tr1()
{
	enseq_main_region_Extrude_default();
}

/* 'default' enter sequence for state Wait */
void State_Diagramm::enseq_main_region_Wait_default()
{
	/* 'default' enter sequence for state Wait */
	stateConfVector[0] = main_region_Wait;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Init */
void State_Diagramm::enseq_main_region_Init_default()
{
	/* 'default' enter sequence for state Init */
	stateConfVector[0] = main_region_Init;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Ready */
void State_Diagramm::enseq_main_region_Ready_default()
{
	/* 'default' enter sequence for state Ready */
	stateConfVector[0] = main_region_Ready;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Retract */
void State_Diagramm::enseq_main_region_Retract_default()
{
	/* 'default' enter sequence for state Retract */
	stateConfVector[0] = main_region_Retract;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state End */
void State_Diagramm::enseq_main_region_End_default()
{
	/* 'default' enter sequence for state End */
	stateConfVector[0] = main_region_End;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Extrude */
void State_Diagramm::enseq_main_region_Extrude_default()
{
	/* 'default' enter sequence for state Extrude */
	stateConfVector[0] = main_region_Extrude;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Measurement */
void State_Diagramm::enseq_main_region_Measurement_default()
{
	/* 'default' enter sequence for state Measurement */
	stateConfVector[0] = main_region_Measurement;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for region main region */
void State_Diagramm::enseq_main_region_default()
{
	/* 'default' enter sequence for region main region */
	react_main_region__entry_Default();
}

/* Default exit sequence for state Wait */
void State_Diagramm::exseq_main_region_Wait()
{
	/* Default exit sequence for state Wait */
	stateConfVector[0] = State_Diagramm_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for state Init */
void State_Diagramm::exseq_main_region_Init()
{
	/* Default exit sequence for state Init */
	stateConfVector[0] = State_Diagramm_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for state Ready */
void State_Diagramm::exseq_main_region_Ready()
{
	/* Default exit sequence for state Ready */
	stateConfVector[0] = State_Diagramm_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for state Retract */
void State_Diagramm::exseq_main_region_Retract()
{
	/* Default exit sequence for state Retract */
	stateConfVector[0] = State_Diagramm_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for state End */
void State_Diagramm::exseq_main_region_End()
{
	/* Default exit sequence for state End */
	stateConfVector[0] = State_Diagramm_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for state Extrude */
void State_Diagramm::exseq_main_region_Extrude()
{
	/* Default exit sequence for state Extrude */
	stateConfVector[0] = State_Diagramm_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for state Measurement */
void State_Diagramm::exseq_main_region_Measurement()
{
	/* Default exit sequence for state Measurement */
	stateConfVector[0] = State_Diagramm_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for region main region */
void State_Diagramm::exseq_main_region()
{
	/* Default exit sequence for region main region */
	/* Handle exit of all possible states (of State_Diagramm.main_region) at position 0... */
	switch(stateConfVector[ 0 ])
	{
		case main_region_Wait :
		{
			exseq_main_region_Wait();
			break;
		}
		case main_region_Init :
		{
			exseq_main_region_Init();
			break;
		}
		case main_region_Ready :
		{
			exseq_main_region_Ready();
			break;
		}
		case main_region_Retract :
		{
			exseq_main_region_Retract();
			break;
		}
		case main_region_End :
		{
			exseq_main_region_End();
			break;
		}
		case main_region_Extrude :
		{
			exseq_main_region_Extrude();
			break;
		}
		case main_region_Measurement :
		{
			exseq_main_region_Measurement();
			break;
		}
		default: break;
	}
}

/* The reactions of state null. */
void State_Diagramm::react_main_region__choice_0()
{
	/* The reactions of state null. */
	if (check_main_region__choice_0_tr0_tr0())
	{ 
		effect_main_region__choice_0_tr0();
	}  else
	{
		effect_main_region__choice_0_tr1();
	}
}

/* Default react sequence for initial entry  */
void State_Diagramm::react_main_region__entry_Default()
{
	/* Default react sequence for initial entry  */
	enseq_main_region_Wait_default();
}

sc_boolean State_Diagramm::react() {
	/* State machine reactions. */
	return false;
}

sc_boolean State_Diagramm::main_region_Wait_react(const sc_boolean try_transition) {
	/* The reactions of state Wait. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if (ifaceInternalSCI.S_raised)
		{ 
			exseq_main_region_Wait();
			enseq_main_region_Init_default();
			react();
		}  else
		{
			if (ifaceInternalSCI.S_0_raised)
			{ 
				exseq_main_region_Wait();
				enseq_main_region_Wait_default();
				react();
			}  else
			{
				did_transition = false;
			}
		}
	} 
	if ((did_transition) == (false))
	{ 
		did_transition = react();
	} 
	return did_transition;
}

sc_boolean State_Diagramm::main_region_Init_react(const sc_boolean try_transition) {
	/* The reactions of state Init. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if (ifaceInternalSCI.S_0_raised)
		{ 
			exseq_main_region_Init();
			enseq_main_region_Wait_default();
			react();
		}  else
		{
			if (ifaceInternalSCI.k_raised)
			{ 
				exseq_main_region_Init();
				enseq_main_region_Ready_default();
				react();
			}  else
			{
				did_transition = false;
			}
		}
	} 
	if ((did_transition) == (false))
	{ 
		did_transition = react();
	} 
	return did_transition;
}

sc_boolean State_Diagramm::main_region_Ready_react(const sc_boolean try_transition) {
	/* The reactions of state Ready. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if (ifaceInternalSCI.S_0_raised)
		{ 
			exseq_main_region_Ready();
			enseq_main_region_Wait_default();
			react();
		}  else
		{
			if (ifaceInternalSCI.k_0_raised)
			{ 
				exseq_main_region_Ready();
				enseq_main_region_Init_default();
				react();
			}  else
			{
				if (ifaceInternalSCI.Retr_raised)
				{ 
					exseq_main_region_Ready();
					enseq_main_region_Retract_default();
					react();
				}  else
				{
					if (ifaceInternalSCI.SZ_raised)
					{ 
						exseq_main_region_Ready();
						enseq_main_region_Init_default();
						react();
					}  else
					{
						if (ifaceInternalSCI.Extrd_raised)
						{ 
							exseq_main_region_Ready();
							react_main_region__choice_0();
						}  else
						{
							did_transition = false;
						}
					}
				}
			}
		}
	} 
	if ((did_transition) == (false))
	{ 
		did_transition = react();
	} 
	return did_transition;
}

sc_boolean State_Diagramm::main_region_Retract_react(const sc_boolean try_transition) {
	/* The reactions of state Retract. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if (ifaceInternalSCI.S_0_raised)
		{ 
			exseq_main_region_Retract();
			enseq_main_region_Wait_default();
			react();
		}  else
		{
			if (ifaceInternalSCI.Top_raised)
			{ 
				exseq_main_region_Retract();
				enseq_main_region_End_default();
				react();
			}  else
			{
				if (ifaceInternalSCI.Retr_0_raised)
				{ 
					exseq_main_region_Retract();
					enseq_main_region_Ready_default();
					react();
				}  else
				{
					if (ifaceInternalSCI.Retr_raised)
					{ 
						exseq_main_region_Retract();
						enseq_main_region_Retract_default();
						react();
					}  else
					{
						if (ifaceInternalSCI.SZ_raised)
						{ 
							exseq_main_region_Retract();
							enseq_main_region_Init_default();
							react();
						}  else
						{
							did_transition = false;
						}
					}
				}
			}
		}
	} 
	if ((did_transition) == (false))
	{ 
		did_transition = react();
	} 
	return did_transition;
}

sc_boolean State_Diagramm::main_region_End_react(const sc_boolean try_transition) {
	/* The reactions of state End. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if (ifaceInternalSCI.S_0_raised)
		{ 
			exseq_main_region_End();
			enseq_main_region_Wait_default();
			react();
		}  else
		{
			if (ifaceInternalSCI.Top_raised)
			{ 
				exseq_main_region_End();
				enseq_main_region_Wait_default();
				react();
			}  else
			{
				if (ifaceInternalSCI.SZ_raised)
				{ 
					exseq_main_region_End();
					enseq_main_region_Init_default();
					react();
				}  else
				{
					did_transition = false;
				}
			}
		}
	} 
	if ((did_transition) == (false))
	{ 
		did_transition = react();
	} 
	return did_transition;
}

sc_boolean State_Diagramm::main_region_Extrude_react(const sc_boolean try_transition) {
	/* The reactions of state Extrude. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if (ifaceInternalSCI.S_0_raised)
		{ 
			exseq_main_region_Extrude();
			enseq_main_region_Wait_default();
			react();
		}  else
		{
			if (ifaceInternalSCI.Extrd_0_raised)
			{ 
				exseq_main_region_Extrude();
				enseq_main_region_Ready_default();
				react();
			}  else
			{
				if (ifaceInternalSCI.Extrd_raised)
				{ 
					exseq_main_region_Extrude();
					enseq_main_region_Extrude_default();
					react();
				}  else
				{
					if (ifaceInternalSCI.SZ_raised)
					{ 
						exseq_main_region_Extrude();
						enseq_main_region_Init_default();
						react();
					}  else
					{
						if (ifaceInternalSCI.Bottom_raised)
						{ 
							exseq_main_region_Extrude();
							enseq_main_region_End_default();
							react();
						}  else
						{
							if (ifaceInternalSCI.k_raised)
							{ 
								exseq_main_region_Extrude();
								enseq_main_region_Measurement_default();
								react();
							}  else
							{
								did_transition = false;
							}
						}
					}
				}
			}
		}
	} 
	if ((did_transition) == (false))
	{ 
		did_transition = react();
	} 
	return did_transition;
}

sc_boolean State_Diagramm::main_region_Measurement_react(const sc_boolean try_transition) {
	/* The reactions of state Measurement. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if (ifaceInternalSCI.k_0_raised)
		{ 
			exseq_main_region_Measurement();
			enseq_main_region_Extrude_default();
			react();
		}  else
		{
			if (ifaceInternalSCI.Extrd_0_raised)
			{ 
				exseq_main_region_Measurement();
				enseq_main_region_Ready_default();
				react();
			}  else
			{
				if (ifaceInternalSCI.S_0_raised)
				{ 
					exseq_main_region_Measurement();
					enseq_main_region_Wait_default();
					react();
				}  else
				{
					did_transition = false;
				}
			}
		}
	} 
	if ((did_transition) == (false))
	{ 
		did_transition = react();
	} 
	return did_transition;
}



