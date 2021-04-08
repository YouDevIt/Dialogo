/* A packrat parser generated by PackCC 1.5.0 */

#ifndef PCC_INCLUDED_DIALOGO_H
#define PCC_INCLUDED_DIALOGO_H


void init();
void final();

struct Array {int size; int len; char **strings; int *arg1; int *arg2; int *arg3;};

void array_init(struct Array *array, int size);
void array_free(struct Array *array);
int array_add(struct Array *array, char *str, int arg1, int arg2, int arg3);
char *array_getstring(struct Array *array, int idx);
int array_getarg1(struct Array *array, int idx);
int array_getarg2(struct Array *array, int idx);
int array_getarg3(struct Array *array, int idx);
int array_contains(struct Array *array, char *str);

const int D_NORDEST = 3;
const int D_NORDOVEST = 11;
const int D_NORD = 2;
const int D_GIU = 6;
const int D_FUORI = 7;
const int D_SUDEST = 5;
const int D_SUDOVEST = 9;
const int D_SUD = 8;
const int D_SU = 0;
const int D_DENTRO = 1;
const int D_EST = 4;
const int D_OVEST = 10;

void p_start();
void p_final();
void _pindent(const char *fmt, ...);
void p_cmd_val(char *cmd, char *val, int ret);
void p_cmd(char *cmd, int ret);
void p_prop_val(char *prop, char* obj, char *val, int ret);
void p_prop(char *prop, char *obj, int ret);
void p_is_prop(char *prop, char *obj, int ret);
void p_room(char *name, int genre, int plural, int proper);
void p_supporter(char *name, int genre, int plural, int proper, int mobile);
void p_container(char *name, int genre, int plural, int proper, int mobile);
void p_person(char *name, int genre, int plural, int proper);
void p_object(char *name, int genre, int plural, int proper);
void p_is_rel(char *name, char *loc, char *rel, int ret);
void p_fromto(int dir, char *locfrom, char *locto);
void p_fromtoandback(int dir, char *locfrom, char *locto);
void p_action(char* handler, char *azione, char *obj1, char *obj2, char *prep);
void p_plaintext(char *str);

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pcc_context_tag pcc_context_t;

pcc_context_t *pcc_create(void *auxil);
int pcc_parse(pcc_context_t *ctx, char **ret);
void pcc_destroy(pcc_context_t *ctx);

#ifdef __cplusplus
}
#endif

#endif /* !PCC_INCLUDED_DIALOGO_H */
