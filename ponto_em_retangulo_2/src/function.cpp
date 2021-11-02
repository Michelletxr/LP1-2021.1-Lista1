#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Adicione seu código aqui.
    if(IE.x==SD.x && IE.y==SD.y){return INVALID;} //essa modificação no enum é válida?


    // TODO: Coloque aqui seu código.
    int C  = SD.x - IE.x;
    int L  = SD.y - IE.y;
    int C1 = abs(P.x) - IE.x,  C2 = abs(P.x - IE.x);
    int L1 = abs(P.y) - IE.y,  L2 = abs(P.y - IE.y);

    location_t location_pt{};

    if((C1>C || C2>C) || (L1>L || L2>L)){ location_pt =OUTSIDE;}
    else if(( P.x == IE.x || P.x == SD.x) || (P.y == IE.y || P.y == SD.y)){ location_pt = BORDER;}
    else{location_pt=INSIDE;}

    return location_pt;

}
