#ifndef MUI_VIEW_DISPATCHER_H
#define MUI_VIEW_DISPATCHER_H

#include "m-dict.h"
#include "mui_core.h"
#include "mui_view.h"
#include "mui_view_port.h"

DICT_DEF2(mui_view_dict, uint32_t, M_DEFAULT_OPLIST, mui_view_t*, M_PTR_OPLIST)

typedef struct {
    mui_t* p_mui;
    mui_view_port_t view_port;
    mui_view_dict_t views;
    mui_view_t* p_active_view;
}mui_view_dispatcher_t;


mui_view_dispatcher_t* mui_view_dispatcher_create();
void mui_view_dispatcher_free(mui_view_dispatcher_t* p_dispatcher);
void mui_view_dispatcher_add_view(mui_view_dispatcher_t* p_dispatcher, uint32_t view_id, mui_view_t* p_view);
void mui_view_dispatcher_remove_view(mui_view_dispatcher_t* p_dispatcher, uint32_t view_id);
void mui_view_dispatcher_attach(mui_view_dispatcher_t* p_dispatcher);
void mui_view_dispatcher_dettach(mui_view_dispatcher_t* p_dispatcher);
void mui_view_dispatcher_display_view(mui_view_dispatcher_t* p_dispatcher, uint32_t view_id);


#endif