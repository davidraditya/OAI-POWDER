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

/*!\brief SCHED external variables */

#ifndef __SCHED_EXTERN_H__
#define __SCHED_EXTERN_H__

#include "defs.h"
//#include "dlc_engine.h"

extern int openair_sched_status;

//extern int exit_PHY;
//extern int exit_PHY_ack;

extern int synch_wait_cnt;


extern int16_t hundred_times_delta_TF[100];
extern uint16_t hundred_times_log10_NPRB[100];

#endif /*__SCHED_EXTERN_H__ */
