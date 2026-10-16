#include "AIFunction_AddAnimationEntry_C11.h"
extern void Warning_Show(const char*, ...);
extern int Anim_Resolve(int animId); /* sub_4b8a20 */
void AIFunction_AddAnimationEntry(int animationId, double weight)
{
    if (g_ai->anim_count >= 5) {
        Warning_Show("Maximum number of animation entries (#%d) reached", 5);
        return;
    }
    g_ai->entries[g_ai->anim_count].id = Anim_Resolve(animationId);
    g_ai->entries[g_ai->anim_count].weight = weight;
    g_ai->anim_count += 1;
}
