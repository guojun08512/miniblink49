// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MediaKeySystemConfiguration_h
#define MediaKeySystemConfiguration_h

#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "modules/encryptedmedia/MediaKeySystemMediaCapability.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT MediaKeySystemConfiguration {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    MediaKeySystemConfiguration();

    bool hasAudioCapabilities() const { return !m_audioCapabilities.isNull(); }
    const HeapVector<MediaKeySystemMediaCapability>& audioCapabilities() const { return m_audioCapabilities.get(); }
    void setAudioCapabilities(const HeapVector<MediaKeySystemMediaCapability>& value) { m_audioCapabilities = value; }

    bool hasDistinctiveIdentifier() const { return !m_distinctiveIdentifier.isNull(); }
    String distinctiveIdentifier() const { return m_distinctiveIdentifier; }
    void setDistinctiveIdentifier(String value) { m_distinctiveIdentifier = value; }

    bool hasInitDataTypes() const { return !m_initDataTypes.isNull(); }
    const Vector<String>& initDataTypes() const { return m_initDataTypes.get(); }
    void setInitDataTypes(const Vector<String>& value) { m_initDataTypes = value; }

    bool hasLabel() const { return !m_label.isNull(); }
    String label() const { return m_label; }
    void setLabel(String value) { m_label = value; }

    bool hasPersistentState() const { return !m_persistentState.isNull(); }
    String persistentState() const { return m_persistentState; }
    void setPersistentState(String value) { m_persistentState = value; }

    bool hasSessionTypes() const { return !m_sessionTypes.isNull(); }
    const Vector<String>& sessionTypes() const { return m_sessionTypes.get(); }
    void setSessionTypes(const Vector<String>& value) { m_sessionTypes = value; }

    bool hasVideoCapabilities() const { return !m_videoCapabilities.isNull(); }
    const HeapVector<MediaKeySystemMediaCapability>& videoCapabilities() const { return m_videoCapabilities.get(); }
    void setVideoCapabilities(const HeapVector<MediaKeySystemMediaCapability>& value) { m_videoCapabilities = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<HeapVector<MediaKeySystemMediaCapability>> m_audioCapabilities;
    String m_distinctiveIdentifier;
    Nullable<Vector<String>> m_initDataTypes;
    String m_label;
    String m_persistentState;
    Nullable<Vector<String>> m_sessionTypes;
    Nullable<HeapVector<MediaKeySystemMediaCapability>> m_videoCapabilities;

    friend class V8MediaKeySystemConfiguration;
};

} // namespace blink

#endif // MediaKeySystemConfiguration_h