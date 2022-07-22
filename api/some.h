/**
 * I am wrapping these in a struct just so they show up on the same page in the
 * screenshot. It is not necessary to do so in order to experience the bug.
 */
struct Buggy {

/**
 * This one will break because the math swallows the newline.
 * @param away The direction \f$\tan x\f$ \n in which you float.
 */
void something_with_parameters(float away);

/**
 * This one will work.
 * @param days_journey_into_night This newline: \n survives because no math.
 */
void something_else(long days_journey_into_night);

};
