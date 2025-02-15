/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */ 

/*! \file flexran_agent.h
 * \brief top level flexran agent  
 * \author Navid Nikaein and Xenofon Foukas
 * \date 2017
 * \version 0.1
 */

#ifndef FLEXRAN_AGENT_H_
#define FLEXRAN_AGENT_H_

#include "flexran_agent_common.h"
#include "flexran_agent_async.h"
#include "flexran_agent_extern.h"
#include "flexran_agent_timer.h"
#include "flexran_agent_defs.h"
#include "flexran_agent_net_comm.h"
#include "flexran_agent_ran_api.h"
#include "flexran_agent_mac.h"
#include "flexran_agent_rrc.h"
#include "flexran_agent_pdcp.h"
#include "log.h"
#include "assertions.h"

/* Initiation of the eNodeB agent */
int flexran_agent_start(mid_t mod_id);

/* 
 * enb agent task mainly wakes up the tx thread for periodic and oneshot messages to the controller 
 * and can interact with other itti tasks
*/
void *flexran_agent_task(void *args);

#endif
