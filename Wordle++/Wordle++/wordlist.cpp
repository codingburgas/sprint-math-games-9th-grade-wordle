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
    "earl", "earn", "ease", "east", "easy", "edge", "else", "emit", "epic", "even",
    "ever", "evil", "exam", "exit", "eyed", "face", "fact", "fail", "fair", "fall",
    "fame", "farm", "fast", "fate", "fear", "feed", "feel", "feet", "fell", "felt",
    "file", "fill", "film", "find", "fine", "fire", "firm", "fish", "five", "flag",
    "flat", "fled", "flee", "flew", "flow", "folk", "food", "foot", "ford", "form",
    "fort", "four", "free", "from", "fuel", "full", "fund", "gain", "game", "gate",
    "gave", "gear", "gene", "gift", "girl", "give", "glad", "goal", "goes", "gold",
    "golf", "gone", "good", "gray", "grew", "grey", "grow", "gulf", "hair", "half",
    "hall", "hand", "hang", "hard", "harm", "hate", "have", "head", "hear", "heat",
    "held", "hell", "help", "here", "hero", "high", "hill", "hint", "hire", "hold",
    "hole", "holy", "home", "hook", "hope", "horn", "host", "hour", "huge", "hung",
    "hunt", "hurt", "idea", "inch", "iron", "item", "jack", "jail", "jane", "jean",
    "john", "join", "jump", "june", "jury", "just", "keen", "keep", "kept", "kick",
    "kill", "kind", "king", "kiss", "knee", "knew", "know", "lack", "lady", "laid",
    "lake", "land", "lane", "last", "late", "lead", "leaf", "lean", "left", "legs",
    "lend", "lens", "less", "liar", "life", "lift", "like", "line", "link", "lion",
    "list", "live", "load", "loan", "lock", "long", "look", "lord", "lose", "loss",
    "lost", "loud", "love", "luck", "lung", "made", "maid", "mail", "main", "make",
    "male", "mall", "many", "marc", "mark", "mars", "mass", "mate", "math", "mayo",
    "maze", "meal", "mean", "meat", "meet", "melt", "menu", "mere", "mesa", "mess",
    "mice", "mild", "mile", "milk", "mill", "mind", "mine", "mint", "miss", "mist",
    "mode", "mold", "monk", "mood", "moon", "more", "most", "move", "much", "must",
    "myth", "nail", "name", "navy", "near", "neck", "need", "nest", "news", "next",
    "nice", "nick", "nine", "node", "none", "noon", "norm", "nose", "note", "nova",
    "nude", "null", "oath", "obey", "ohio", "okay", "once", "only", "onto", "open",
    "oral", "oven", "over", "pace", "pack", "page", "paid", "pain", "pair", "pale",
    "palm", "park", "part", "pass", "past", "path", "peak", "peer", "pick", "pile",
    "pill", "pine", "pink", "pipe", "plan", "play", "plot", "plug", "plus", "poem",
    "poet", "pole", "poll", "pond", "pool", "poor", "pope", "port", "pose", "post",
    "pour", "pray", "prey", "pull", "pure", "push", "quit", "race", "rack", "rage",
    "raid", "rail", "rain", "rank", "rare", "rate", "rays", "read", "real", "rear",
    "rely", "rent", "rest", "rice", "rich", "ride", "ring", "rise", "risk", "road",
    "roar", "rock", "rode", "role", "roll", "roof", "room", "root", "rope", "rose",
    "rule", "rush", "ruth", "safe", "sage", "said", "sail", "sake", "sale", "salt",
    "same", "sand", "sang", "sank", "save", "scan", "scar", "seal", "seat", "sect",
    "seed", "seek", "seem", "seen", "self", "sell", "send", "sent", "sept", "shed",
    "ship", "shop", "shot", "show", "shut", "sick", "side", "sign", "silk", "sing",
    "sink", "site", "size", "skin", "skip", "slam", "slap", "slip", "slow", "snap",
    "snow", "soap", "soft", "soil", "sold", "sole", "some", "song", "soon", "sort",
    "soul", "soup", "span", "spec", "sped", "spin", "spot", "star", "stay", "stem",
    "step", "stir", "stop", "such", "suck", "sued", "suit", "sung", "sunk", "sure",
    "surf", "swan", "swam", "swim", "tail", "take", "tale", "talk", "tall", "tank",
    "tape", "task", "team", "tear", "tech", "teen", "tell", "tend", "tent", "term",
    "test", "text", "than", "that", "thee", "them", "then", "they", "thin", "this",
    "tide", "tied", "tier", "tile", "till", "tilt", "time", "tiny", "tire", "toad",
    "told", "tone", "took", "tool", "tops", "tore", "torn", "tour", "town", "toys",
    "trap", "tray", "tree", "trek", "trim", "trio", "trip", "true", "tube", "tune",
    "turn", "twin", "type", "unit", "upon", "used", "user", "vary", "vast", "very",
    "vest", "vice", "view", "visa", "void", "vote", "wade", "wage", "wait", "wake",
    "walk", "wall", "ward", "warm", "warn", "wash", "wave", "ways", "weak", "wear",
    "week", "well", "went", "were", "west", "what", "when", "whip", "whom", "wide",
    "wife", "wild", "will", "wind", "wine", "wing", "wink", "wipe", "wire", "wise",
    "wish", "with", "wolf", "wood", "wool", "word", "wore", "work", "worm", "worn",
    "wrap", "yard", "yeah", "year", "yell", "your", "zero", "zone", "zoom"
};
const int SIZE_EN_4 = 600;


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
    "focus", "force", "forth", "forty", "forum", "found", "frame", "frank", "fraud", "fresh",
    "front", "fruit", "fully", "funny", "giant", "given", "glass", "globe", "glory", "grace",
    "grade", "grain", "grand", "grant", "grass", "grave", "great", "green", "gross", "group",
    "grown", "guard", "guess", "guest", "guide", "guilt", "habit", "happy", "harry", "harsh",
    "heart", "heavy", "hence", "henry", "horse", "hotel", "house", "human", "ideal", "image",
    "imply", "index", "inner", "input", "issue", "japan", "jimmy", "joint", "jones", "judge",
    "juice", "known", "label", "labor", "large", "laser", "later", "laugh", "layer", "learn",
    "lease", "least", "leave", "legal", "lemon", "level", "lewis", "light", "limit", "links",
    "lives", "local", "logic", "loose", "lower", "lucky", "lunch", "lying", "magic", "major",
    "maker", "march", "maria", "match", "maybe", "mayor", "meant", "media", "mercy", "metal",
    "meter", "might", "minor", "minus", "mixed", "model", "money", "month", "moral", "motor",
    "mount", "mouse", "mouth", "moved", "movie", "music", "needs", "never", "newly", "night",
    "noise", "north", "noted", "novel", "nurse", "occur", "ocean", "offer", "often", "order",
    "other", "ought", "outer", "owned", "owner", "paint", "panel", "paper", "parks", "party",
    "peace", "peter", "phase", "phone", "photo", "piano", "piece", "pilot", "pitch", "place",
    "plain", "plane", "plant", "plate", "point", "pound", "power", "press", "price", "pride",
    "prime", "print", "prior", "prize", "proof", "proud", "prove", "queen", "quest", "quick",
    "quiet", "quite", "radio", "raise", "range", "rapid", "ratio", "reach", "react", "ready",
    "realm", "refer", "reign", "relax", "reply", "rider", "ridge", "rifle", "right", "rigid",
    "river", "robin", "roger", "roman", "rough", "round", "route", "royal", "rural", "scale",
    "scene", "scope", "score", "sense", "serve", "seven", "shall", "shape", "share", "sharp",
    "sheet", "shelf", "shell", "shift", "shine", "shirt", "shock", "shoot", "shore", "short",
    "shown", "sight", "since", "sixth", "sized", "skill", "sleep", "slide", "small", "smart",
    "smile", "smith", "smoke", "solid", "solve", "sorry", "sound", "south", "space", "spare",
    "speak", "speed", "spend", "spent", "split", "spoke", "sport", "squad", "staff", "stage",
    "stake", "stand", "start", "state", "steam", "steel", "steep", "steer", "stern", "stick",
    "still", "stock", "stone", "stood", "store", "storm", "story", "strip", "stuck", "study",
    "stuff", "style", "sugar", "suite", "super", "sweet", "swift", "swing", "sword", "table",
    "taken", "taste", "taxes", "teach", "teeth", "terry", "texas", "thank", "theft", "their",
    "theme", "there", "these", "thick", "thing", "think", "third", "those", "three", "threw",
    "throw", "thumb", "tight", "timer", "times", "tired", "title", "today", "topic", "total",
    "touch", "tough", "tower", "track", "trade", "train", "trait", "treat", "trend", "trial",
    "tribe", "trick", "tried", "tries", "troop", "truck", "truly", "trunk", "trust", "truth",
    "tuple", "twice", "twist", "uncle", "under", "undue", "union", "unity", "until", "upper",
    "upset", "urban", "usage", "usual", "valid", "value", "video", "virus", "visit", "vital",
    "vocal", "voice", "voter", "wages", "waste", "watch", "water", "wheel", "where", "which",
    "while", "white", "whole", "whose", "woman", "women", "world", "worry", "worse", "worst",
    "worth", "would", "wound", "write", "wrong", "wrote", "yield", "young", "youth", "zones"
};
const int SIZE_EN_5 = 600;


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
    "dinner", "direct", "divine", "doctor", "dollar", "domain", "double", "driven", "driver", "during",
    "easily", "eating", "editor", "effect", "effort", "eighth", "either", "eleven", "emerge", "empire",
    "employ", "enable", "ending", "energy", "engage", "engine", "enough", "ensure", "entire", "entity",
    "equity", "escape", "estate", "ethnic", "europe", "evolve", "exceed", "except", "excess", "expand",
    "expect", "expert", "export", "expose", "extend", "extent", "fabric", "facial", "factor", "failed",
    "fairly", "fallen", "family", "famous", "farmer", "father", "fellow", "female", "figure", "filter",
    "finger", "finish", "fiscal", "fitted", "flavor", "flight", "flower", "flying", "folded", "follow",
    "forced", "forest", "forget", "formal", "format", "formed", "former", "foster", "fought", "fourth",
    "french", "friend", "frozen", "future", "gained", "galaxy", "garden", "gather", "gently", "george",
    "german", "global", "golden", "google", "gospel", "gotten", "grace", "gravel", "grease", "ground",
    "growth", "guilty", "hammer", "handed", "handle", "happen", "hardly", "hatred", "having", "headed",
    "health", "heated", "heaven", "helped", "hidden", "higher", "highly", "holder", "honest", "horror",
    "hunger", "hungry", "hunter", "impact", "import", "impose", "income", "indeed", "indian", "inform",
    "injury", "inline", "inner", "insect", "inside", "insist", "insure", "intact", "intent", "invest",
    "invite", "island", "israel", "issued", "itself", "jacket", "jersey", "johnny", "joined", "joseph",
    "junior", "killed", "killer", "kindly", "knight", "ladies", "landed", "larger", "lastly", "lately",
    "latest", "latter", "launch", "lawyer", "laying", "leader", "league", "learned", "leaves", "legacy",
    "legend", "length", "lesson", "letter", "liable", "lifted", "likely", "limits", "linked", "liquid",
    "listen", "little", "living", "loaded", "locate", "locked", "london", "lonely", "longer", "looked",
    "loosen", "losing", "lovely", "loving", "lowest", "luxury", "mainly", "making", "manage", "manner",
    "manual", "marble", "margin", "marine", "marked", "market", "marred", "martin", "master", "matrix",
    "matter", "mature", "medium", "member", "memory", "mental", "merely", "merged", "method", "mexico",
    "middle", "mighty", "miller", "mining", "minute", "mirror", "missed", "mixing", "mobile", "modern",
    "modest", "module", "moment", "monday", "months", "morals", "morris", "moscow", "mostly", "mother",
    "motion", "motive", "moving", "murder", "muscle", "museum", "mutual", "myself", "narrow", "nation",
    "native", "nature", "nearby", "nearly", "neatly", "needed", "nelson", "nephew", "nicely", "normal",
    "notice", "notion", "number", "object", "obtain", "occupy", "occurs", "office", "offset", "online",
    "opened", "openly", "oppose", "option", "oracle", "orange", "origin", "output", "oxford", "packed",
    "packet", "palace", "parent", "parish", "parker", "partly", "passed", "patent", "patrol", "patron",
    "paul", "paying", "people", "period", "permit", "person", "phrase", "picked", "pierre", "placed",
    "planet", "player", "please", "pledge", "plenty", "plugin", "pocket", "poetry", "points", "police",
    "policy", "polish", "polite", "portal", "posted", "potato", "powder", "praise", "prayer", "prefer",
    "pretty", "priest", "prince", "prison", "profit", "prompt", "proper", "proved", "proven", "public",
    "purely", "purple", "pursue", "pushed", "puzzle", "quartz", "québec", "queens", "quoted", "racial",
    "radius", "raised", "random", "ranked", "rarely", "rather", "rating", "reader", "really", "reason",
    "recall", "recent", "recipe", "record", "reduce", "refer", "regard", "regime", "region", "regret",
    "reject", "relate", "relief", "remain", "remark", "remedy", "remind", "remote", "remove", "render",
    "rental", "repair", "repeat", "replay", "reply", "report", "rescue", "resort", "result", "retail",
    "retain", "retire", "return", "reveal", "review", "revise", "reward", "rhythm", "ribbon", "riding",
    "rising", "ritual", "rivers", "robust", "rocket", "rolled", "romans", "ronald", "rotate", "rubber",
    "ruling", "runner", "rushed", "russia", "sacred", "saddle", "safely", "safety", "sailed", "saints",
    "salary", "sample", "samuel", "saturn", "savage", "saving", "saying", "scales", "scared", "scheme",
    "school", "scored", "screen", "script", "search", "season", "seated", "second", "secret", "sector",
    "secure", "seeing", "seemed", "select", "senate", "senior", "sensor", "series", "served", "server",
    "settle", "severe", "sexual", "shadow", "shaken", "shaped", "shared", "shield", "shifted", "shines",
    "shorts", "should", "showed", "shower", "shut", "signal", "signed", "silent", "silver", "simple",
    "simply", "single", "sister", "smooth", "snakes", "social", "socket", "sodium", "solely", "solved",
    "source", "soviet", "speech", "sphere", "spirit", "spoken", "spread", "spring", "square", "stable",
    "staged", "stairs", "stands", "stated", "static", "status", "steady", "stolen", "stored", "stores",
    "strain", "strand", "stream", "street", "stress", "strict", "strike", "string", "stroke", "strong",
    "struck", "stuart", "studio", "submit", "sudden", "suffer", "summer", "summit", "sunday", "supply",
    "surely", "survey", "switch", "symbol", "system", "tables", "tackle", "taking", "talent", "talked",
    "target", "taught", "temple", "tenant", "tender", "tennis", "tensor", "teresa", "termed", "tested",
    "thanks", "thatch", "theory", "theyre", "things", "thinks", "thirty", "thomas", "though", "thread",
    "threat", "thrown", "thrust", "ticket", "timber", "timing", "tissue", "titled", "titles", "toilet",
    "tongue", "towers", "tracks", "trader", "trains", "travel", "treaty", "trends", "trials", "tribal",
    "tribes", "tricks", "troops", "trophy", "trout", "trying", "tucker", "tunnel", "turkey", "turned",
    "turtle", "twelve", "twenty", "ultimo", "unable", "unfair", "unions", "unique", "united", "unless",
    "unlike", "unlock", "update", "upheld", "upload", "upward", "urgent", "urging", "useful", "valley",
    "values", "varied", "varies", "vastly", "vector", "vendor", "venice", "verbal", "verify", "versus",
    "vessel", "victim", "victor", "videos", "vienna", "viewed", "viewer", "viking", "visual", "vocal",
    "volume", "waited", "walker", "walked", "wallet", "walter", "wander", "wanted", "warmth", "warned",
    "warren", "washed", "watson", "wealth", "weapon", "weekly", "weight", "wheels", "whilst", "wholly",
    "wicked", "widely", "widget", "wilson", "window", "winter", "wisdom", "wished", "within", "wonder",
    "wooden", "worker", "worthy", "wounds", "Writer", "yellow", "youngest"
};
const int SIZE_EN_6 = 600;


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
    "coupled", "courage", "covered", "created", "creator", "crystal", "culture", "current", "cutting", "dealing",
    "decided", "decline", "default", "defence", "defense", "deficit", "deliver", "density", "dentist", "deposit",
    "derived", "describe", "desktop", "despair", "despite", "destroy", "detail", "develop", "devoted", "diamond",
    "digital", "dignity", "director", "disable", "discard", "discuss", "disease", "dismiss", "display", "dispute",
    "distant", "diverse", "divided", "divorce", "doctors", "dollars", "domestic", "dominant", "drawing", "dressed",
    "driving", "dropped", "dynamic", "earlier", "eastern", "economy", "edition", "editing", "educate", "edwards",
    "effects", "efforts", "elderly", "elected", "elegant", "element", "embrace", "emerged", "emotion", "emperor",
    "enabled", "enclose", "enforce", "engaged", "enhance", "enjoyed", "ensuing", "ensures", "entered", "entrada",
    "episode", "equally", "escaped", "essence", "evening", "exactly", "examine", "example", "exceed", "excited",
    "exclude", "execute", "exercise", "exhibit", "existed", "expand", "expects", "expense", "explain", "explode",
    "explore", "exposed", "express", "extend", "extinct", "extract", "extreme", "faculty", "failing", "failure",
    "falling", "fantasy", "farmers", "fashion", "feature", "federal", "feeding", "feeling", "fiction", "fifteen",
    "fighter", "figured", "filling", "finally", "finance", "finding", "fishing", "fitness", "fitting", "flatten",
    "flexible", "flights", "floating", "flowing", "focused", "follows", "footage", "foreign", "forever", "formula",
    "fortune", "forward", "founded", "founder", "freedom", "freight", "friendly", "fulfill", "funeral", "further",
    "gallery", "gateway", "general", "genetic", "genuine", "gesture", "getting", "glasses", "glimpse", "goddess",
    "grandfather", "granted", "graphic", "gravity", "greatly", "grocery", "grouped", "growing", "guaranteed", "guessed",
    "guidance", "habitat", "handled", "handler", "hanging", "happens", "happily", "harbour", "harmony", "harvest",
    "heading", "healthy", "hearing", "heavily", "heights", "helpful", "helping", "herself", "highway", "himself",
    "history", "hitting", "holding", "holiday", "holland", "honored", "horizon", "housing", "however", "hundred",
    "hungary", "hunting", "husband", "illegal", "imagery", "imagine", "improve", "impulse", "include", "indexed",
    "induced", "initial", "injured", "inquiry", "insight", "inspire", "install", "instant", "instead", "insulin",
    "intense", "invaded", "involve", "Islamic", "Islands", "isolated", "italian", "Jackson", "Jamaica", "January",
    "jealous", "jessica", "jewellery", "joining", "jointly", "journal", "journey", "judging", "justice", "justify",
    "keeping", "kennedy", "keyword", "killing", "kingdom", "kitchen", "knowing", "labeled", "lacking", "landing",
    "largely", "largest", "lasting", "lattice", "laughed", "launder", "lawsuit", "lawyers", "layered", "leading",
    "learned", "leather", "leaving", "lecture", "legally", "legends", "leisure", "lending", "lengths", "leonard",
    "lessons", "letters", "liberal", "library", "license", "lifestyle", "lifting", "lighted", "limited", "lincoln",
    "listing", "literal", "???tle", "logical", "looking", "lottery", "loyalty", "luggage", "machine", "madison",
    "magical", "magnet", "managed", "manager", "mandate", "mankind", "mapping", "marched", "margins", "marines",
    "markers", "markets", "married", "marshal", "massive", "matched", "matters", "maximum", "meaning", "measure",
    "medical", "meeting", "melting", "members", "memoirs", "mention", "message", "michael", "million", "mineral",
    "minimal", "minimum", "minister", "minutes", "miracle", "mirrors", "mission", "mistake", "mixture", "modified",
    "modules", "moments", "monarch", "monitor", "monster", "montana", "monthly", "morally", "morning", "morocco",
    "mounted", "mundane", "musical", "mystery", "nascent", "nations", "natural", "nearest", "neatly", "neither",
    "nervous", "network", "neutral", "newborn", "newport", "niagara", "nigeria", "nominal", "norfolk", "normals",
    "norther", "notably", "nothing", "noticed", "nowhere", "nuclear", "numbers", "numeric", "nursing", "oakland",
    "objects", "observe", "obvious", "oceanic", "october", "offense", "offered", "officer", "offices", "offline",
    "ongoing", "opening", "operate", "opinion", "opposed", "optical", "optimal", "options", "ordered", "orderly",
    "origins", "orlando", "outcome", "outdoor", "outlook", "outputs", "outside", "overall", "overlap", "oversee",
    "overwhelming", "package", "packets", "painted", "painter", "pairing", "paisley", "palaces", "pancake", "panels",
    "paradox", "paragon", "parents", "parking", "partial", "parties", "partner", "passing", "passion", "passive",
    "patches", "pathway", "patient", "patrick", "pattern", "payment", "payroll", "peasant", "penalty", "pending",
    "peoples", "percent", "perfect", "perform", "perhaps", "perilds", "periods", "persist", "persons", "petty",
    "phrases", "physics", "pianist", "picking", "picture", "pioneer", "plains", "planned", "planner", "plastic",
    "plateau", "players", "playing", "pleased", "pleasure", "pledged", "plotted", "plunged", "poetics", "pointed",
    "pointer", "pokemon", "polaris", "polished", "polling", "popular", "portion", "portray", "possess", "posture",
    "pottery", "poverty", "powders", "powered", "prairie", "praised", "prayers", "precise", "predict", "premier",
    "premium", "prepare", "present", "pressed", "preston", "pretend", "prevent", "preview", "primary", "primate",
    "princes", "printed", "printer", "privacy", "private", "problem", "proceed", "process", "produce", "product",
    "profile", "profits", "program", "project", "promise", "promote", "pronoun", "propel", "prophet", "propose",
    "protest", "proudly", "provide", "province", "provoke", "????ic", "publish", "pulling", "pumping", "punched",
    "purpose", "pushing", "putting", "puzzled", "pyramid", "qualify", "quality", "quantum", "quarter", "queries",
    "quickly", "quietly", "quoting", "radical", "railway", "rainbow", "raising", "ranging", "rapidly", "rational",
    "reached", "reaches", "reactor", "readily", "reading", "reality", "realize", "realizing", "rebecca", "rebuild",
    "receipt", "receive", "recipes", "reckon", "records", "recover", "recruit", "reduced", "reflect", "reforms",
    "refugee", "refused", "regards", "regimes", "regions", "regular", "reigned", "related", "release", "reliant",
    "relief", "remains", "remarks", "removed", "renewal", "rentals", "repairs", "repeats", "replace", "reports",
    "request", "require", "rescued", "reserve", "reshape", "resided", "resolve", "respect", "respond", "restore",
    "results", "retired", "retreat", "returns", "reveals", "revenue", "reverse", "reviews", "revised", "revival",
    "revolve", "rewards", "richard", "richest", "riddles", "rigidly", "roberts", "rockets", "rolling", "romance",
    "romanov", "rooting", "rotated", "roughly", "rounded", "routine", "royalty", "rubbing", "rulings", "runners",
    "running", "russell", "russian", "sailing", "sailors", "salaries", "samples", "sanders", "satisfy", "sausage",
    "savings", "scandal", "scarcely", "scared", "scenery", "schemes", "schmidt", "scholar", "schools", "science",
    "scoring", "scratch", "screams", "screens", "scripts", "scrolls", "seafood", "sealed", "sealing", "seating",
    "seconds", "secrets", "section", "secured", "seeking", "seemed", "segment", "seizing", "selects", "selling",
    "senate", "sending", "seniors", "sensory", "sentence", "separate", "serbian", "serious", "serpent", "servant",
    "servers", "service", "serving", "session", "settled", "seventh", "several", "severely", "shading", "shadows",
    "shaking", "shallow", "shannon", "shaping", "sharing", "sharply", "shelter", "shelves", "sherman", "shields",
    "shifted", "shining", "shipped", "shocked", "shooter", "shortly", "shouted", "showing", "shrines", "shuffle",
    "shuttle", "sidebar", "signals", "signing", "silence", "silicon", "similar", "simpler", "simpson", "sincere",
    "singing", "sitting", "sixteen", "skating", "sketch", "skilled", "skipped", "slashed", "slavery", "sleeper",
    "slender", "slicing", "sliding", "slighly", "slipped", "slowing", "smaller", "smartly", "smiling", "smoking",
    "smoothly", "smiling", "snapped", "soaking", "society", "sockets", "softest", "soldier", "solomon", "solving",
    "somehow", "someone", "sorting", "sounded", "sources", "southern", "spacing", "spanish", "sparked", "spatial",
    "speaker", "special", "species", "specify", "spectrum", "spencer", "spiders", "spirits", "sponsor", "spotted",
    "spreading", "springs", "squared", "squeeze", "stadium", "staffed", "staging", "stained", "stamped", "stanley",
    "staples", "starred", "started", "startup", "stating", "station", "statute", "staying", "stanley", "stewart"
};
const int SIZE_EN_7 = 600;


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

    return false;
}