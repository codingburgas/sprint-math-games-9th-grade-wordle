#include "wordlist.h"
#include <cstdlib>
#include <algorithm>

using namespace std;


const string words_en_4[] = {
    "able", "acid", "aged", "also", "area", "army", "away", "baby", "back", "ball",
    "band", "bank", "base", "bath", "bear", "beat", "been", "beer", "bell", "belt",
    "best", "bill", "bird", "blow", "blue", "boat", "body", "bond", "bone", "book",
    "born", "boss", "both", "bowl", "bulk", "burn", "bush", "busy", "call", "calm",
    "came", "camp", "card", "care", "case", "cast", "cell", "chat", "chip", "city",
    "club", "coal", "coat", "code", "cold", "come", "cook", "cool", "cope", "copy",
    "core", "cost", "crew", "crop", "dark", "data", "date", "dawn", "days", "dead",
    "deal", "dean", "dear", "debt", "deck", "deep", "deny", "desk", "dial", "dick",
    "diet", "disc", "disk", "dock", "does", "done", "door", "dose", "down", "draw",
    "drew", "drop", "drug", "dual", "duck", "duke", "dull", "dust", "duty", "each",
    "earl", "earn", "ease", "east", "easy", "edge", "else", "emit", "empty", "enemy",
    "enjoy", "enter", "entry", "equal", "error", "event", "every", "exact", "exist",
    "extra", "face", "fact", "fail", "fair", "fall", "farm", "fast", "fate", "fear",
    "feed", "feel", "feet", "fell", "felt", "file", "fill", "film", "find", "fine",
    "fire", "firm", "fish", "five", "flat", "fled", "flee", "flew", "flow", "folk",
    "food", "foot", "ford", "form", "fort", "four", "free", "from", "fuel", "full",
    "fund", "gain", "game", "gate", "gave", "gear", "gene", "gift", "girl", "give",
    "glad", "goal", "goes", "gold", "golf", "gone", "good", "gray", "grew", "grey",
    "grow", "gulf", "hair", "half", "hall", "hand", "hang", "hard", "harm", "hate",
    "have", "head", "hear", "heat", "held", "hell", "help", "here", "hero", "high"
};
const int SIZE_EN_4 = 200;


const string words_en_5[] = {
    "about", "above", "abuse", "actor", "acute", "admit", "adopt", "adult", "after", "again",
    "agent", "agree", "ahead", "alarm", "album", "alert", "align", "alike", "alive", "allow",
    "alone", "along", "alter", "amber", "amend", "among", "ample", "angel", "anger", "angle",
    "angry", "apart", "apple", "apply", "arena", "argue", "arise", "array", "arrow", "aside",
    "asset", "audio", "audit", "avoid", "awake", "award", "aware", "badly", "baker", "bases",
    "basic", "basis", "beach", "began", "begin", "being", "below", "bench", "billy", "birth",
    "black", "blade", "blame", "blank", "blind", "block", "blood", "blown", "board", "boost",
    "booth", "bound", "brain", "brand", "brave", "bread", "break", "breed", "brief", "bring",
    "broad", "broke", "brown", "build", "built", "buyer", "cable", "calif", "canal", "candy",
    "carry", "catch", "cause", "chain", "chair", "chaos", "charm", "chart", "chase", "cheap",
    "check", "chest", "chief", "child", "china", "chose", "civil", "claim", "class", "clean",
    "clear", "click", "clock", "close", "cloud", "coach", "coast", "could", "count", "court",
    "cover", "craft", "crash", "crazy", "cream", "crime", "cross", "crowd", "crown", "crude",
    "curve", "cycle", "daily", "dance", "dated", "dealt", "death", "debut", "delay", "delta",
    "dense", "depth", "doing", "doubt", "dozen", "draft", "drama", "drank", "drawn", "dream",
    "dress", "drill", "drink", "drive", "drops", "drove", "dying", "eager", "early", "earth",
    "eight", "elect", "elite", "empty", "enemy", "enjoy", "enter", "entry", "equal", "error",
    "event", "every", "exact", "exist", "extra", "faith", "false", "fault", "fiber", "field",
    "fifth", "fifty", "fight", "final", "first", "fixed", "flash", "fleet", "floor", "fluid",
    "focus", "force", "forth", "forty", "forum", "found", "frame", "frank", "fraud", "fresh"
};
const int SIZE_EN_5 = 200;


const string words_en_6[] = {
    "accept", "access", "across", "acting", "action", "active", "actual", "advice", "advise", "affair",
    "affect", "afford", "afraid", "agency", "agenda", "agreed", "almost", "already", "always", "amount",
    "animal", "annual", "answer", "anyone", "anyway", "appeal", "appear", "around", "arrive", "artist",
    "aspect", "assess", "assign", "assist", "assume", "assure", "attach", "attack", "attempt", "attend",
    "august", "author", "avenue", "backed", "balance", "ballot", "battle", "beauty", "became", "become",
    "before", "behalf", "behind", "belief", "belong", "berlin", "better", "beyond", "binary", "bishop",
    "border", "bottle", "bottom", "bought", "branch", "breach", "breath", "bridge", "bright", "broken",
    "broker", "budget", "burden", "bureau", "button", "called", "camera", "cancer", "canvas", "carbon",
    "career", "castle", "casual", "caught", "center", "centre", "chance", "change", "charge", "choice",
    "choose", "chosen", "church", "circle", "client", "closed", "closer", "coffee", "column", "combat",
    "coming", "common", "comply", "copper", "corner", "costly", "county", "couple", "course", "courts",
    "cousin", "covered", "create", "credit", "crisis", "critic", "crowd", "cruise", "crystal", "damage",
    "danger", "dealer", "debate", "decade", "decide", "decree", "defeat", "defend", "define", "degree",
    "demand", "depend", "deputy", "desert", "design", "desire", "detail", "detect", "device", "differ",
    "dinner", "direct", "distance", "divine", "doctor", "dollar", "domain", "double", "driven", "driver",
    "during", "easily", "eating", "editor", "effect", "effort", "eighth", "either", "eleven", "emerge",
    "empire", "employ", "enable", "ending", "enemy", "energy", "engage", "engine", "enough", "ensure",
    "entire", "entity", "equity", "escape", "estate", "ethnic", "europe", "event", "every", "evolve",
    "exceed", "except", "excess", "expand", "expect", "expert", "export", "expose", "extend", "extent",
    "fabric", "facial", "factor", "failed", "fairly", "fallen", "family", "famous", "father", "fellow"
};
const int SIZE_EN_6 = 200;


const string words_en_7[] = {
    "ability", "absence", "academy", "account", "accused", "achieve", "acquire", "address", "advance", "adverse",
    "advised", "adviser", "advocate", "against", "alcohol", "alleged", "alliance", "already", "altered", "amazing",
    "amended", "ancient", "another", "anxious", "anymore", "applied", "approve", "archive", "argument", "arrived",
    "article", "assault", "assumed", "assured", "athlete", "attempt", "attract", "auction", "audience", "average",
    "backing", "balance", "balloon", "banking", "barrier", "battery", "bearing", "beating", "because", "becoming",
    "bedroom", "believe", "beneath", "benefit", "besides", "between", "billion", "binding", "biology", "booking",
    "brother", "brought", "burning", "cabinet", "caliber", "calling", "capable", "capital", "captain", "caption",
    "capture", "careful", "carrier", "casting", "catalog", "catches", "ceiling", "central", "century", "ceramic",
    "certain", "chamber", "channel", "chapter", "charity", "charlie", "charter", "checked", "chicken", "chronic",
    "circuit", "citizen", "classic", "climate", "closing", "closure", "clothes", "coating", "coastal", "collect",
    "college", "combine", "comfort", "command", "comment", "commerce", "compact", "company", "compare", "compete",
    "compile", "complex", "concept", "concern", "concert", "conclude", "conduct", "confirm", "conflict", "confront",
    "confused", "congress", "connect", "consent", "consist", "console", "content", "contest", "context", "continue",
    "contract", "contrast", "control", "convert", "cooking", "correct", "council", "counsel", "counter", "country",
    "coupled", "courage", "covered", "craft", "created", "creator", "crystal", "culture", "current", "cutting",
    "dealing", "decided", "decline", "default", "defence", "defense", "deficit", "deliver", "density", "dentist",
    "deposit", "derived", "describe", "desktop", "despair", "despite", "destroy", "detail", "detect", "develop",
    "devoted", "diamond", "digital", "dignity", "director", "disable", "discard", "discuss", "disease", "dismiss",
    "display", "dispute", "distant", "diverse", "divided", "divorce", "doctors", "dollars", "domestic", "dominant",
    "drawing", "dressed", "driving", "dropped", "dynamic", "earlier", "eastern", "economy", "edition", "editing"
};
const int SIZE_EN_7 = 200;


string wordlist_get_random_word(Language lang, int length) {
    if (lang != ENGLISH) {
        lang = ENGLISH;
    }

    if (length == 4) {
        return words_en_4[rand() % SIZE_EN_4];
    }
    else if (length == 5) {
        return words_en_5[rand() % SIZE_EN_5];
    }
    else if (length == 6) {
        return words_en_6[rand() % SIZE_EN_6];
    }
    else if (length == 7) {
        return words_en_7[rand() % SIZE_EN_7];
    }

    return "hello";
}

bool wordlist_is_valid_word(string word, Language lang) {
    int len = word.length();
    const string* wordlist;
    int size;

    if (len == 4) {
        wordlist = words_en_4;
        size = SIZE_EN_4;
    }
    else if (len == 5) {
        wordlist = words_en_5;
        size = SIZE_EN_5;
    }
    else if (len == 6) {
        wordlist = words_en_6;
        size = SIZE_EN_6;
    }
    else if (len == 7) {
        wordlist = words_en_7;
        size = SIZE_EN_7;
    }
    else {
        return false;
    }

    for (int i = 0; i < size; i++) {
        if (wordlist[i] == word) {
            return true;
        }
    }

    return true;
}