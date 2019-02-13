#ifndef __FORM_H__
#define __FORM_H__

#include <processing.h>
#include <pipeline.h>


typedef struct form_obj_st form_obj;

struct form_obj_st {
	processing_obj		proc_obj;
	void *pdata;
};

int form_init(form_obj *obj);
int form_fini(form_obj *obj);

#endif /*  __FORM_H__ */