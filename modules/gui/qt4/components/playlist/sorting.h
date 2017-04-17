/*****************************************************************************
 * sorting.h : commun sorting & column display code
 ****************************************************************************
 * Copyright © 2008 the VideoLAN team and AUTHORS
 * $Id: f0ea8722c75619a347fd1ff43bd536e549645cd3 $
 *
 * Authors: Rafaël Carré <funman@videolanorg>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifndef _SORTING_H_
#define _SORTING_H_
#include <vlc_media_library.h>
/* You can use these numbers with | and & to determine what you want to show */
enum
{
// sunqueen modify start
    COLUMN_TITLE__          = 0x0001,
    COLUMN_DURATION__       = 0x0002,
    COLUMN_ARTIST__         = 0x0004,
    COLUMN_GENRE__          = 0x0008,
    COLUMN_ALBUM__          = 0x0010,
    COLUMN_TRACK_NUMBER__   = 0x0020,
    COLUMN_DESCRIPTION__    = 0x0040,
    COLUMN_URI__            = 0x0080,
    COLUMN_NUMBER__         = 0x0100,
    COLUMN_RATING__         = 0x0200,
    COLUMN_COVER__          = 0x0400,

    /* Add new entries here and update the COLUMN_END value*/

    COLUMN_END__          = 0x0800
// sunqueen modify end
};

#define COLUMN_DEFAULT__ (COLUMN_TITLE__|COLUMN_DURATION__|COLUMN_ALBUM__)			// sunqueen modify

/* Return the title of a column */
static inline const char * psz_column_title( uint32_t i_column )
{
    switch( i_column )
    {
// sunqueen modify start
    case COLUMN_NUMBER__:          return _("ID");
    case COLUMN_TITLE__:           return VLC_META_TITLE;
    case COLUMN_DURATION__:        return _("Duration");
    case COLUMN_ARTIST__:          return VLC_META_ARTIST;
    case COLUMN_GENRE__:           return VLC_META_GENRE;
    case COLUMN_ALBUM__:           return VLC_META_ALBUM;
    case COLUMN_TRACK_NUMBER__:    return VLC_META_TRACK_NUMBER;
    case COLUMN_DESCRIPTION__:     return VLC_META_DESCRIPTION;
    case COLUMN_URI__:             return _("URI");
    case COLUMN_RATING__:          return VLC_META_RATING;
    case COLUMN_COVER__:           return VLC_META_ART_URL;
    default: abort();
// sunqueen modify end
    }
}

/* Return the meta data associated with an item for a column
 * Returned value has to be freed */
static inline char * psz_column_meta( input_item_t *p_item, uint32_t i_column )
{
    int i_duration;
    char psz_duration[MSTRTIME_MAX_SIZE];
    switch( i_column )
    {
// sunqueen modify start
    case COLUMN_NUMBER__:
        return NULL;
    case COLUMN_TITLE__:
        return input_item_GetTitleFbName( p_item );
    case COLUMN_DURATION__:
        i_duration = input_item_GetDuration( p_item ) / 1000000;
        if( i_duration == 0 ) return NULL;
        secstotimestr( psz_duration, i_duration );
        return strdup( psz_duration );
    case COLUMN_ARTIST__:
        return input_item_GetArtist( p_item );
    case COLUMN_GENRE__:
        return input_item_GetGenre( p_item );
    case COLUMN_ALBUM__:
        return input_item_GetAlbum( p_item );
    case COLUMN_TRACK_NUMBER__:
        return input_item_GetTrackNum( p_item );
    case COLUMN_DESCRIPTION__:
        return input_item_GetDescription( p_item );
    case COLUMN_URI__:
        return input_item_GetURI( p_item );
    case COLUMN_RATING__:
        return input_item_GetRating( p_item );
    case COLUMN_COVER__:
        return input_item_GetArtworkURL( p_item );
    default:
        abort();
// sunqueen modify end
    }
}

/* Return the playlist sorting mode for a given column */
static inline int i_column_sorting( uint32_t i_column )
{
    switch( i_column )
    {
// sunqueen modify start
    case COLUMN_NUMBER__:         return SORT_ID;
    case COLUMN_TITLE__:          return SORT_TITLE_NODES_FIRST;
    case COLUMN_DURATION__:       return SORT_DURATION;
    case COLUMN_ARTIST__:         return SORT_ARTIST;
    case COLUMN_GENRE__:          return SORT_GENRE;
    case COLUMN_ALBUM__:          return SORT_ALBUM;
    case COLUMN_TRACK_NUMBER__:   return SORT_TRACK_NUMBER;
    case COLUMN_DESCRIPTION__:    return SORT_DESCRIPTION;
    case COLUMN_URI__:            return SORT_URI;
    case COLUMN_RATING__:         return SORT_RATING;
    default: abort();
// sunqueen modify end
    }
}

static inline ml_select_e meta_to_mlmeta( uint32_t i_column )
{
    switch( i_column )
    {
// sunqueen modify start
    case COLUMN_NUMBER__:         return ML_ID;
    case COLUMN_TITLE__:          return ML_TITLE;
    case COLUMN_DURATION__:       return ML_DURATION;
    case COLUMN_ARTIST__:         return ML_ARTIST;
    case COLUMN_GENRE__:          return ML_GENRE;
    case COLUMN_ALBUM__:          return ML_ALBUM;
    case COLUMN_TRACK_NUMBER__:   return ML_TRACK_NUMBER;
    case COLUMN_DESCRIPTION__:    return ML_EXTRA;
    case COLUMN_URI__:            return ML_URI;
    case COLUMN_RATING__:         return ML_VOTE;
    case COLUMN_COVER__:          return ML_COVER;
    default: abort();
// sunqueen modify end
    }
}

#endif
